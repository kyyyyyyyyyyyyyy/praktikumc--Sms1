#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm> // Untuk std::shuffle
#include <random>    // Untuk random engine

using namespace std;

const int BOARD_SIZE = 8;
typedef vector<vector<char>> Board;

// Inisialisasi papan catur dengan bidak
void initializeBoard(Board &board) {
    board = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };
}

// Menampilkan papan catur
void displayBoard(const Board &board) {
    cout << "  ";
    for (int i = 0; i < BOARD_SIZE; i++) cout << i << " ";
    cout << endl;

    for (int i = 0; i < BOARD_SIZE; i++) {
        cout << i << " ";
        for (int j = 0; j < BOARD_SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk memeriksa apakah gerakan valid
bool isValidMove(const Board &board, int x1, int y1, int x2, int y2, char player) {
    // Pastikan koordinat dalam batas papan
    if (x1 < 0 || x1 >= BOARD_SIZE || y1 < 0 || y1 >= BOARD_SIZE ||
        x2 < 0 || x2 >= BOARD_SIZE || y2 < 0 || y2 >= BOARD_SIZE)
        return false;

    // Pemain 'P' hanya boleh bergerak maju satu langkah
    if (player == 'P') {
        if (x2 == x1 - 1 && y1 == y2 && board[x2][y2] == '.')
            return true; // Maju satu langkah
        if (x2 == x1 - 1 && abs(y2 - y1) == 1 && islower(board[x2][y2]))
            return true; // Menyerang secara diagonal
    }

    // Pemain 'p' (komputer) hanya boleh maju satu langkah
    if (player == 'p') {
        if (x2 == x1 + 1 && y1 == y2 && board[x2][y2] == '.')
            return true; // Maju satu langkah
        if (x2 == x1 + 1 && abs(y2 - y1) == 1 && isupper(board[x2][y2]))
            return true; // Menyerang secara diagonal
    }

    return false;
}

// Fungsi untuk memindahkan bidak
void makeMove(Board &board, int x1, int y1, int x2, int y2) {
    board[x2][y2] = board[x1][y1];
    board[x1][y1] = '.';
}

// Fungsi untuk algoritma lawan (gerakan acak)
void algoMove(Board &board) {
    srand(time(0));
    while (true) {
        int x1 = rand() % BOARD_SIZE;
        int y1 = rand() % BOARD_SIZE;
        int x2 = x1 + 1;
        int y2 = y1 + (rand() % 3 - 1); // Gerak lurus atau menyerang

        if (board[x1][y1] == 'p' && isValidMove(board, x1, y1, x2, y2, 'p')) {
            makeMove(board, x1, y1, x2, y2);
            cout << "Algo moved from (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2 << ").\n";
            break;
        }
    }
}

// Fungsi utama
int main() {
    Board board;
    initializeBoard(board);

    cout << "Selamat datang di permainan catur sederhana!\n";
    displayBoard(board);

    while (true) {
        // Giliran pemain
        int x1, y1, x2, y2;
        cout << "Masukkan gerakan Anda (format: x1 y1 x2 y2): ";
        cin >> x1 >> y1 >> x2 >> y2;

        if (isValidMove(board, x1, y1, x2, y2, 'P')) {
            makeMove(board, x1, y1, x2, y2);
        } else {
            cout << "Gerakan tidak valid, coba lagi.\n";
            continue;
        }

        displayBoard(board);

        // Periksa kemenangan pemain
        bool algoDefeated = true;
        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                if (board[i][j] == 'p') {
                    algoDefeated = false;
                    break;
                }
            }
        }
        if (algoDefeated) {
            cout << "Selamat, Anda menang!\n";
            break;
        }

        // Giliran algoritma
        algoMove(board);
        displayBoard(board);

        // Periksa kemenangan algoritma
        bool playerDefeated = true;
        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                if (board[i][j] == 'P') {
                    playerDefeated = false;
                    break;
                }
            }
        }
        if (playerDefeated) {
            cout << "Algo menang! Coba lagi.\n";
            break;
        }
    }

    return 0;
}