#include <iostream>
#include <cstdlib>

size_t SIZE = 10;

void printArr(int arr[],size_t length){
    for(int i = 0;i < length;i++){
        std::cout << arr[i];
    }
}

void sort(int arr[], size_t length){
    int sorted[SIZE];
    int indexEven = -2;
    int indexOdd = -1;    
   for(int i = 0;i < SIZE;i++){
       if(arr[i] % 2 == 0){
        indexEven += 2;
        sorted[indexEven] = arr[i];
       } else {
        indexOdd += 2;        
        sorted[indexOdd] = arr[i];
       }

   }
   printArr(sorted, SIZE);
}


int main(){

    int arr[SIZE] = {1,1,1,1,1,2,2,2,2,2};

    sort(arr, SIZE);
    return 0;
}