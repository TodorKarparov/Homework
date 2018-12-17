#include <iostream>
#include <cstdlib>
#include "functions.hpp"

size_t SIZE = 10;

void bubbleSort(int arr[], size_t SIZE){

  int currentIndex = 0;
  int index = 0;
  do{
    index++;
    if(arr[currentIndex] > arr[currentIndex + 1]){
    int tmp;
    tmp = arr[currentIndex];
    arr[currentIndex] = arr[currentIndex+1];
    arr[currentIndex+1] = tmp;
    index = 0;
  }
    currentIndex++;
    if(currentIndex == SIZE - 1){
      currentIndex = 0;
    }

  } while (index != SIZE);


  printArrayInt(arr, SIZE);

}



int main(){

  int arr[SIZE] = {3,4,1,5,8,7,6,0,9,2};


  bubbleSort(arr, SIZE);

  return 0;
}
