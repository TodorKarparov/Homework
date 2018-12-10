#include <iostream>
using namespace std;

const size_t SIZE = 3;

void printMatrix(int mtr[SIZE][SIZE]){
  for(int i = 0;i < SIZE;i++){
    for(int j = 0;j < SIZE;j++){
      cout << mtr[i][j] << " ";
      if(j+1 == SIZE){
        cout << "\n";
      }
    }
  }
}

void multiplyMatrices(int mtr1[SIZE][SIZE], int mtr2[SIZE][SIZE], int result[SIZE][SIZE]){

  int currentIndex;
  for(int row = 0;row < SIZE;row++){
    for(currentIndex = 0;currentIndex < SIZE;currentIndex++){
      int sum = 0;
      for(int j = 0;j < SIZE;j++){
        sum += mtr1[row][j]*mtr2[j][currentIndex];
      }
      result[row][currentIndex] = sum;
    }
  }




  //printing

}


int main(){

  int matrix1[SIZE][SIZE] = {3,4,5,1,0,1,1,1,1};
  int result[SIZE][SIZE] = {0};

  multiplyMatrices(matrix1,matrix1,result);

  printMatrix(result);

  return 0;
}
