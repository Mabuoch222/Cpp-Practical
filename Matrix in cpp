#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    int rows, cols;
    vector<vector<int>> data;

public:
    Matrix(int r, int c) : rows(r), cols(c), data(rows, vector<int>(cols)) {}

    Matrix operator+(Matrix const &other) {
        if (rows != other.rows || cols != other.cols)
            throw "Matrices are incompatible for addition.";
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator*(Matrix const &other) {
        if (cols != other.rows)
            throw "Matrices are incompatible for multiplication.";
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    Matrix transpose() {
        Matrix result(cols, rows);
        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < rows; j++) {
                result.data[i][j] = data[j][i];
            }
        }
        return result;
    }

    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    void read() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }
};

int main() 
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter number of rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    Matrix A(rows1, cols1);
    cout << "Enter elements of first matrix: ";
    A.read();

    cout << "Enter number of rows and columns for second matrix: ";
    cin >> rows2 >> cols2;
    Matrix B(rows2, cols2);
    cout << "Enter elements of second matrix: ";
    B.read();

    try {
        C = A + B;
        C.print();
    } 
    catch (const char *msg) {
        cerr << msg << endl;
    }
    try {
        C = A * B;
        C.print();
    } 
    catch (const char *msg) {
        cerr << msg << endl;
    }
}
