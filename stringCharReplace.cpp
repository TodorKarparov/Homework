#include <iostream>
using namespace std;

//a)
void printString(char* string){
  for(long i = 0; string[i] != 0; i++){
    cout << string[i];
  }
}

char* replaceA(char* string, char oldChar, char newChar){
  for(long i = 0;string[i] != 0;i++){
    if(string[i] == oldChar){
      string[i] = newChar;
    }
  }
  return string;
}

*/
int main() {

  char str1[10000];
  char* str2;
  char oldChar, newChar;

  cin.getline(str1, 10000);

  cout << "Enter character you want to replace: ";
  cin >> oldChar;
  cout << "\n" << "Replace with: ";
  cin >> newChar;

  str2 = replace(str1, oldChar, newChar);
  printString(str2);

  return 0;
}
