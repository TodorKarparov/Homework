#include <iostream>


void compare(int arr1[], int arr2[], int length){
  int counter = 0;
  for(int i = 0; i < length;i++){
    for(int j = 0;j < length;j++){
      if (arr1[i] == arr2[j]){
        counter++;
      }
    }
  }
  std::cout << "cases a=b: " << counter << std::endl;
}

int main(){

  int arr1[51] = {0};
  int arr2[51] = {0};
  int a, n;
  std::cout << "Enter length of sequences: ";
  std::cin >> n;
  std::cout << "Enter the integers of the first sequence: " << std::endl;
  for(int i = 0;i < n;i++){
    std::cin >> arr1[i];
  }
  std::cout << "Enter the integers of the second sequence: " << std::endl;
  for(int i = 0;i < n;i++){
    std::cin >> arr2[i];
  }

  compare(arr1, arr2, n);
  return 0;
}
