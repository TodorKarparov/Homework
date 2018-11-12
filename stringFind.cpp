#include <iostream>
using namespace std;

void printString(char string[]){
  for (long i = 0;string[i] != '\0';i++){
    cout << string[i];
  }
}

long stringLength(char string[]){
  long i = 0;
  while (string[i] != '\0'){
    i++;
  }
  return i;
}

void stringFind(char string[], char gesucht[]){

  long gesuchtLenge = stringLength(gesucht);
  long counter = 0;

  for(long i = 0;string[i] != '\0';i++){
    long h = i;
      for(long g = 0; string[h] != '\0' && string[h] == gesucht[g];g++){
        h++;
        if(g == gesuchtLenge - 1){
          counter++;
        }
      }
    }
    if(counter == 0){
      cout<< -1 << endl;
      return;
    }
    cout << "\n" << counter;
}




int main () {

  char string1[10000];
  char gesucht[10000];

  cin.getline(string1, 10000);
  cin.getline(gesucht, 10000);

  stringFind(string1, gesucht);

  return 0;
}
