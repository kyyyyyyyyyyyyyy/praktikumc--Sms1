#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

struct Schedule {
    vector<int> slots; // Slot waktu untuk setiap mata kuliah
    int conflicts;     // Jumlah konflik
};

// Fungsi untuk menghitung konflik dalam jadwal
int calculateConflicts(const vector<int>& slots, const vector<vector<int>>& studentCourses) {
    int conflicts = 0;
    for (const auto& student : studentCourses) {
        for (size_t i = 0; i < student.size(); ++i) {
            for (size_t j = i + 1; j < student.size(); ++j) {
                if (slots[student[i]] == slots[student[j]]) {
                    conflicts++;
                }
            }
        }
    }
    return conflicts;
}

// Inisialisasi jadwal acak
Schedule initializeSchedule(int numCourses, int numSlots, const vector<vector<int>>& studentCourses) {
    Schedule schedule;
    schedule.slots.resize(numCourses);
    for (int i = 0; i < numCourses; ++i) {
        schedule.slots[i] = rand() % numSlots;
    }
    schedule.conflicts = calculateConflicts(schedule.slots, studentCourses);
    return schedule;
}

// Mutasi jadwal
void mutate(Schedule& schedule, int numSlots, const vector<vector<int>>& studentCourses) {
    if ((double)rand() / RAND_MAX < 0.2) { // 20% peluang mutasi
        int course = rand() % schedule.slots.size();
        schedule.slots[course] = rand() % numSlots;
        schedule.conflicts = calculateConflicts(schedule.slots, studentCourses);
    }
}

// Crossover dua jadwal
Schedule crossover(const Schedule& parent1, const Schedule& parent2, const vector<vector<int>>& studentCourses) {
    Schedule child;
    child.slots.resize(parent1.slots.size());
    for (size_t i = 0; i < parent1.slots.size(); ++i) {
        child.slots[i] = (rand() % 2 == 0) ? parent1.slots[i] : parent2.slots[i];
    }
    child.conflicts = calculateConflicts(child.slots, studentCourses);
    return child;
}

int main() {
    srand(time(0));

    // Input data dinamis
    int numCourses, numStudents, numSlots;
    cout << "Masukkan jumlah mata kuliah: ";
    cin >> numCourses;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> numStudents;

    cout << "Masukkan jumlah slot waktu: ";
    cin >> numSlots;

    // Input daftar mata kuliah yang diambil oleh setiap mahasiswa
    vector<vector<int>> studentCourses(numStudents);
    for (int i = 0; i < numStudents; ++i) {
        int numTaken;
        cout << "Masukkan jumlah mata kuliah yang diambil oleh mahasiswa ke-" << i + 1 << ": ";
        cin >> numTaken;

        cout << "Masukkan indeks mata kuliah (0-" << numCourses - 1 << ") yang diambil:\n";
        for (int j = 0; j < numTaken; ++j) {
            int course;
            cin >> course;
            studentCourses[i].push_back(course);
        }
    }

    // Parameter Algoritma Genetika
    const int POP_SIZE = 20; // Ukuran populasi
    const int MAX_GEN = 100; // Generasi maksimum

    // Inisialisasi populasi
    vector<Schedule> population(POP_SIZE);
    for (int i = 0; i < POP_SIZE; ++i) {
        population[i] = initializeSchedule(numCourses, numSlots, studentCourses);
    }

    // Proses evolusi
    for (int gen = 0; gen < MAX_GEN; ++gen) {
        // Sortir populasi berdasarkan jumlah konflik
        sort(population.begin(), population.end(), [](const Schedule& a, const Schedule& b) {
            return a.conflicts < b.conflicts;
        });

        // Cetak konflik terbaik
        cout << "Generasi " << gen + 1 << ": Konflik terbaik = " << population[0].conflicts << endl;

        // Jika tidak ada konflik, berhenti
        if (population[0].conflicts == 0) {
            cout << "Solusi optimal ditemukan pada generasi " << gen + 1 << endl;
            break;
        }

        // Seleksi dan crossover
        vector<Schedule> newPopulation;
        for (int i = 0; i < POP_SIZE / 2; ++i) {
            Schedule child = crossover(population[i], population[i + 1], studentCourses);
            mutate(child, numSlots, studentCourses);
            newPopulation.push_back(child);
        }

        // Tambahkan individu terbaik dari generasi sebelumnya
        while (newPopulation.size() < POP_SIZE) {
            newPopulation.push_back(population[rand() % (POP_SIZE / 2)]);
        }
        population = newPopulation;
    }

    // Cetak jadwal terbaik
    cout << "Jadwal terbaik:" << endl;
    for (int i = 0; i < numCourses; ++i) {
        cout << "Mata Kuliah " << i << ": Slot " << population[0].slots[i] << endl;
    }

    return 0;
}
