#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include "functions.hpp"

clock_t start = std::clock();

size_t const SIZE = 10;

void unsortedness(int arr[SIZE], size_t SIZE){
  int sorted[SIZE];
  for(int i = 0;i < SIZE;i++){
    sorted[i] = arr[i];
  }
  int currentIndex = 0;
  int flag = 0;
  do{
    flag++;
    if(sorted[currentIndex] > sorted[currentIndex + 1]){
    int tmp;
    tmp = sorted[currentIndex];
    sorted[currentIndex] = sorted[currentIndex+1];
    sorted[currentIndex+1] = tmp;
    flag = 0;
  }
    currentIndex++;
    if(currentIndex == SIZE - 1){
      currentIndex = 0;
    }

  } while (flag != SIZE);

  printArrayInt(arr, SIZE);
  std::cout << std::endl;
  printArrayInt(sorted, SIZE);
  int unsorted = 0;
  for(int i = 0;i < SIZE;i++){
    if(arr[i] != sorted[i]){
      unsorted++;
    }
  }
  std::cout << std::endl << unsorted;
}



int main(){

  int arr[SIZE] = {3,4,1,5,8,7,6,0,9,2};

  unsortedness(arr, SIZE);
  
  return 0;
}
