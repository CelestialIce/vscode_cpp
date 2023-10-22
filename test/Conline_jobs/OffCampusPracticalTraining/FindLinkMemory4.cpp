#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

bool is_valid(vector<vector<char>>& board, int row, int col, char num) {
    // Check row
    for (int i = 0; i < 16; i++) {
        if (board[row][i] == num) {
            return false;
        }
    }

    // Check column
    for (int i = 0; i < 16; i++) {
        if (board[i][col] == num) {
            return false;
        }
    }

    // Check 4x4 box
    int start_row = 4 * (row / 4);
    int start_col = 4 * (col / 4);
    for (int i = start_row; i < start_row + 4; i++) {
        for (int j = start_col; j < start_col + 4; j++) {
            if (board[i][j] == num) {
                return false;
            }
        }
    }

    return true;
}

bool solve_sudoku(vector<vector<char>>& board) {
    for (int row = 0; row < 16; row++) {
        for (int col = 0; col < 16; col++) {
            if (board[row][col] == '-') {
                for (char num = 'A'; num <= 'P'; num++) {
                    if (is_valid(board, row, col, num)) {
                        board[row][col] = num;
                        if (solve_sudoku(board)) {
                            return true;
                        }
                        board[row][col] = '-';  // Backtrack
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<char>> sudoku_board;
    while (true) {
        sudoku_board.clear();
        for (int i = 0; i < 16; i++) {
            string row;
            cin >> row;
            sudoku_board.push_back(vector<char>(row.begin(), row.end()));
        }

        if (cin.eof()) {
            break;
        }

        solve_sudoku(sudoku_board);

        for (const auto& row : sudoku_board) {
            for (char c : row) {
                cout << c;
            }
            cout << endl;
        }

        // Print an empty line to separate different test cases
        cout << endl;
    }

    return 0;
}
