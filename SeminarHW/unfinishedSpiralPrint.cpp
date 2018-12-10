#include <iostream>

using namespace std;

const int ROWS = 5;
const int COLS = 5;

void printString(char str[], int length){
  for (int i = 0;i < length;i++){
    cout << str[i];
  }
}

void spiralPrint(char matrix[ROWS][COLS]){
  char result[1000];
  int direction = 0; //0 - right, 1 down, 2 left, 3 up
  int colsPrinted = 0,
      rowsPrinted = 0,
      currentRow = 0,
      currentCol = 0,
      currentIndex = 0;

  while(rowsPrinted != ROWS && colsPrinted != COLS){

    if (direction == 0){
      currentCol = currentCol + colsPrinted/2;

      for (;currentCol < COLS - colsPrinted/2;currentCol++){
        cout << matrix[currentRow][currentCol];
        currentIndex++;
      }
      currentCol--;
      direction++;
      rowsPrinted++;
      currentRow++;

    } else if (direction == 1){
      for (;currentRow <= ROWS - rowsPrinted/2;currentRow++){
        cout << matrix[currentRow][currentCol];
        currentIndex++;
      }
      currentRow--;
      direction++;
      colsPrinted++;
      currentCol++;

    } else if (direction == 2){
      int end = 0 + colsPrinted/2;
      for (;currentCol >= end;currentCol--){
        cout << matrix[currentRow][currentCol];
        currentIndex++;
      }
      currentCol++;
      direction++;
      rowsPrinted++;

    } else if (direction == 3){
      currentRow = currentRow - rowsPrinted/2;

      for(;currentRow >= rowsPrinted/2;currentRow--){
        cout << matrix[currentRow][currentCol];
        currentIndex++;
      }
      currentRow++;
      direction = 0;
      colsPrinted++;
    }

  }
  //printString(result, 40);
}



int main(){

  char matrix[ROWS][COLS] = {'t','o','s','h','k',
                             'h','a','g','a','o',
                             'c','i','8','o','e',
                             'i','m','f','t','g',
                             'p','n','i','t','o'};
  spiralPrint(matrix);

  return 0;
}
