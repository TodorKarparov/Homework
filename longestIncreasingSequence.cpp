#include <iostream>
using namespace std;

void printString(char string[]){

  for (int i = 0;string[i] != '\0';i++){
    cout << string[i];
  }

}

void longestIncreasing(char string[]){
  int count = 1;
  int maxCount = 1;
  for (int i = 1;string[i] != '\0';i++){
    if(string[i] > string[i-1]){
      count++;
    } else if (string[i] < string[i-1]){
      count = 1;
    }
    if(count > maxCount){
      maxCount = count;
    }
  }
  cout << maxCount << endl;
}


int main () {

  char sequence[1000];
  cin.getline(sequence, 1000);

  longestIncreasing(sequence);

  return 0;
}
