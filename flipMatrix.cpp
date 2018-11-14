#include <iostream>
using namespace std;

void printMatrix(char matrix[][3]){
  for(int i = 0;i < 3;i++){
    cout << "\n";
    for(int j = 0;j < 3;j++){
      cout << matrix[i][j] << " ";
    }
  }
}

  void flipMatrix(char matrix[][3]){
    char matrix2[3][3];
    for(int i = 0;i < 3;i++){
      for(int j = 0;j < 3;j++){
        matrix2[i][2-j] = matrix[i][j];
      }
    }


    printMatrix(matrix2);
  }

int main(){

  char matrix[3][3];
  for(int i = 0;i < 3;i++){
    for(int j = 0;j < 3;j++){
      cin >> matrix[i][j];
    }
  }
  
  printMatrix(matrix);
  cout << "\n";
  flipMatrix(matrix);
  return 0;
}
