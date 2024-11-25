#include <iostream>
#include <string>

using namespace std;

void healthCheck (int health, string healthHistory) {
    if (health == 1) {
        cout << "kondisi kesehatan anda : Sehat\n";
    } else {
        cout << "memiliki riwayat penyakit : " << healthHistory << endl;
    }
}

void activity (int activityLevel) {
    if (activityLevel == 1) {
        cout << "tingkat aktivitas : Ringan\n";
    } else if (activityLevel == 2) {
        cout << "tingkat aktivitas : Sedang\n";
    } else if (activityLevel == 3) {
        cout << "tingkat aktivitas : Tinggi\n";
    } else {
        cout << "inputan tidak valid";
    }
}

int main () {
    int age, BPM, activityLevel, health;
    string healthHistory;

    cout << "masukan usia anda: ";
    cin >> age;

    cout << "masukan rentang detak nadi istirahat (BPM) anda: ";
    cin >> BPM;

    cout << "pilih tingkat aktivas anda akhir akhir ini:\n ";
    cout << "1. Ringan\n ";
    cout << "2. Sedang\n ";
    cout << "3. Tinggi\n ";
    cin >> activityLevel;
    if (! activityLevel >= 1 && activityLevel <= 3) {
        cout << "inputan tidak valid\n";
    } 

    cout << "masukan kondisi kesehatan anda :\n ";
    cout << "1. Sehat\n ";
    cout << "2. Memiliki Riwayat Penyakit\n ";
    cin >> health;
    if (health == 2) {
        cin.ignore();
        cout << "masukan riwayat penyakit yang anda miliki : ";
        getline(cin, healthHistory);
    }

    if (age == 0 || age == 1) {
        if (BPM >= 100 && BPM <= 160) {
            cout << "Usia Anda : " << age << endl;
            activity(activityLevel);
            cout << "rentang detak nadi istirahat (BPM) : " << BPM << endl;
            healthCheck(health, healthHistory);
            cout << "kategori kesehatan : Normal\n";
            cout << "catatan: detak jantung bayi lebih cepat karena pertembuhan";
        } else {
            cout << "Usia Anda : " << age << endl;
            activity(activityLevel);
            cout << "rentang detak nadi istirahat (BPM) : " << BPM << endl;
            healthCheck(health, healthHistory);
            cout << "kategori kesehatan : Tidak Normal\n";
            cout << "catatan : rentang detak nadi diluar dari 100-160";
        }
    } else if (age >= 2 && age <= 10) {
        if (BPM >= 70 && BPM <= 130) {
            cout << "Usia Anda : " << age << endl;
            activity(activityLevel);
            cout << "rentang detak nadi istirahat (BPM) : " << BPM << endl;
            healthCheck(health, healthHistory);
            cout << "kategori kesehatan : Normal\n";
            cout << "catatan : detak jantung sesuai pertembuhan anak";
        } else {
            cout << "Usia Anda : " << age << endl;
            activity(activityLevel);
            cout << "rentang detak nadi istirahat (BPM) : " << BPM << endl;
            healthCheck(health, healthHistory);
            cout << "kategori kesehatan : Tidak Normal\n";
            cout << "catatan : rentang detak nadi diluar dari 70-130";
        }
    } else if (age >= 11 && age <= 17) {
        if (BPM >= 60 && BPM <= 100) {
            cout << "Usia Anda : " << age << endl;
            activity(activityLevel);
            cout << "rentang detak nadi istirahat (BPM) : " << BPM << endl;
            healthCheck(health, healthHistory);
            cout << "kategori kesehatan : Normal\n";
            cout << "catatan : detak jantung lebih stabil sesuai perkembangan usia";
        } else {
            cout << "Usia Anda : " << age << endl;
            activity(activityLevel);
            cout << "rentang detak nadi istirahat (BPM) : " << BPM << endl;
            healthCheck(health, healthHistory);
            cout << "kategori kesehatan : Tidak Normal\n";
            cout << "catatan : rentang detak nadi diluar dari 60-100";
        } 
    } else if (age >= 18 && age <= 64) {
        if (BPM >= 60 && BPM <= 100) {
            cout << "Usia Anda : " << age << endl;
            activity(activityLevel);
            cout << "rentang detak nadi istirahat (BPM) : " << BPM << endl;
            healthCheck(health, healthHistory);
            cout << "kategori kesehatan : Normal\n";
            cout << "catatan : detak jantung yang sehat pada orang dewasa";
        } else {
            cout << "Usia Anda : " << age << endl;
            activity(activityLevel);
            cout << "rentang detak nadi istirahat (BPM) : " << BPM << endl;
            healthCheck(health, healthHistory);
            cout << "kategori kesehatan : Tidak Normal\n";
            cout << "catatan : rentang detak nadi diluar dari 60-100";
        }
    } else if (age >= 65) {
        if (BPM >= 60 && BPM <= 100) {
            cout << "Usia Anda : " << age << endl;
            activity(activityLevel);
            cout << "rentang detak nadi istirahat (BPM) : " << BPM << endl;
            healthCheck(health, healthHistory);
            cout << "kategori kesehatan : Normal\n";
            cout << "catatan : detak jantung tetap stabil meski ada variasi aktivitas";
        } else {
            cout << "Usia Anda : " << age << endl;
            activity(activityLevel);
            cout << "rentang detak nadi istirahat (BPM) : " << BPM << endl;
            healthCheck(health, healthHistory);
            cout << "kategori kesehatan : Tidak Normal\n";
            cout << "catatan : rentang detak nadi diluar dari 60-100";
        }
    }

    return 0;
}
 