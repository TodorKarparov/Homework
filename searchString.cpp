#include <iostream>
using namespace std;

void stringSearch (char inputString[], char searchedString[]){
  int m = 0;

  for (int i = 0; inputString[i] != '\0'; i++){

    if (inputString[i] != searchedString[m]){
      m = 0;
      continue;
    }
    if (inputString[i] == searchedString[m]){
      m++;
    }
    if (searchedString[m] == '\0') {
      cout << 1;
      break;
    }
  }

  if (m == 0) {
    cout << 0;
  }


}


int main () {

  char inputString[1000];
  char searchedString[1000];

  cin.getline(inputString, 1000);
  cin.getline(searchedString, 1000);

  stringSearch(inputString, searchedString);

  return 0;
}
