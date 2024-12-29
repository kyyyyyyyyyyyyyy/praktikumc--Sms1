#include <iostream>
using namespace std;

// Ukuran grid Sudoku
const int GRID_SIZE = 9;

// Fungsi untuk mencetak grid Sudoku
void printGrid(int grid[GRID_SIZE][GRID_SIZE]) {
    for (int row = 0; row < GRID_SIZE; row++) {
        for (int col = 0; col < GRID_SIZE; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk memeriksa apakah angka dapat ditempatkan di sel tertentu
bool isSafe(int grid[GRID_SIZE][GRID_SIZE], int row, int col, int num) {
    // Cek apakah angka sudah ada di baris
    for (int x = 0; x < GRID_SIZE; x++) {
        if (grid[row][x] == num) {
            return false;
        }
    }

    // Cek apakah angka sudah ada di kolom
    for (int x = 0; x < GRID_SIZE; x++) {
        if (grid[x][col] == num) {
            return false;
        }
    }

    // Cek apakah angka sudah ada di subgrid 3x3
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Fungsi untuk menyelesaikan Sudoku menggunakan algoritma backtracking
bool solveSudoku(int grid[GRID_SIZE][GRID_SIZE]) {
    int row, col;
    bool emptyCell = false;

    // Temukan sel kosong
    for (row = 0; row < GRID_SIZE; row++) {
        for (col = 0; col < GRID_SIZE; col++) {
            if (grid[row][col] == 0) {
                emptyCell = true;
                break;
            }
        }
        if (emptyCell) break;
    }

    // Jika tidak ada sel kosong, Sudoku selesai
    if (!emptyCell) return true;

    // Coba angka dari 1 hingga 9
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;

            // Rekursif untuk menyelesaikan grid
            if (solveSudoku(grid)) {
                return true;
            }

            // Jika gagal, kembalikan ke nilai awal (backtracking)
            grid[row][col] = 0;
        }
    }

    return false; // Tidak ada solusi
}

int main() {
    // Masukan grid Sudoku
    int grid[GRID_SIZE][GRID_SIZE] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(grid)) {
        cout << "Solved Sudoku Grid:" << endl;
        printGrid(grid);
    } else {
        cout << "No solution exists for the given Sudoku puzzle." << endl;
    }

    return 0;
}
