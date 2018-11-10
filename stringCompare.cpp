#include <iostream>
using namespace std;

void stringCompare(char str1[], char str2[]){
  if(str1[0] == '\0' || str2[0] == '\0'){
    cout << "One of the strings is empty!" << endl;
    return;
  }

  for (int i = 0;1>0;i++){

    if (str1[i] < str2[i]) {
      cout << "-1";
      break;
    }
    if (str1[i] > str2[i]) {
      cout << "+1";
      break;
    }
    if (str1[i] == '\0'){
      cout << "0";
      break;
    }

  }
}


int main() {

  char str1[1000];
  char str2[1000];
  cin.getline(str1, 1000);
  cin.getline(str2, 1000);

  stringCompare(str1, str2);

  return 0;
}
