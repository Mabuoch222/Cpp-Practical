#include <iostream>
using namespace std;

class Matrix {

 private:
  int x[10][10];
  int row, col;

 public:
 
  void getMatrix(int r, int c) {

    Matrix M1;

    row = r;
    col = c;

    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        cout << "Enter x[" << i << "][" << j << "] : ";
        cin >> x[i][j];
      }
    }
  }

  void putMatrix() {
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        cout << x[i][j] << " ";
      }
      cout << "\n";
    }
  }

  Matrix transpose() {
    Matrix M;

    M.row = row;
    M.col = col;

    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        M.x[j][i] = x[i][j];
      }
    }

    return (M);
  }
};

int main() {

  Matrix M1, M2;

  cout << "Enter Matrix:\n" << endl;
  M1.getMatrix(2, 2);

  cout << "\nMatrix:" << endl;
  M1.putMatrix();

  cout << endl;

  M2 = M1.transpose();
  cout << "\nTranspose of matrix\n" << endl;

  M2.putMatrix();

  return 0;
}
