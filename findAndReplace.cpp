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

char* stringOverwrite(char oldString[], char newString[], long place){
  for(long i = 0; newString[i] != '\0';i++){
    oldString[place] = newString[i];
    place++;
  }
  return oldString;
}

void stringFindAndReplace(char string[], char gesucht[], char neuString[]){

  long gesuchtLenge = stringLength(gesucht);
  long counter = 0;

  for(long i = 0;string[i] != '\0';i++){
    long h = i;
    long g;

      for(g = 0; string[h] != '\0' && string[h] == gesucht[g];g++){
        h++;
        if(g == gesuchtLenge - 1){
          stringOverwrite(string, neuString, h-g-1);
          counter++;
        }
      }
    }

    if(counter == 0){
      cout<< -1 << endl;
      return;
    }
    cout << "Replacements: "
         << counter
         << " \n"
         << "New string: "
         << endl;
}



int main () {

  char string1[10000];
  char gesucht[10000];
  char neuString[10000];

  cin.getline(string1, 10000);
  cin.getline(gesucht, 10000);
  cin.getline(neuString, 10000);

  stringFindAndReplace(string1, gesucht, neuString);
  printString(string1);

  return 0;
}
