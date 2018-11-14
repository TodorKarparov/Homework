#include <iostream>
using namespace std;

  int stringLength(char string[]){
    int i = 0;
    while (string[i] != '\0') {
      i++;
    }
    return i;
  }

void nameDiamond(char string[]){

  int length = stringLength(string);
  int i = 1;

  //upper part of the diamond
  while(i != length + 1){
    for(int j = 0; j < i;j++){
      cout<<string[j];
    }
    cout << "\n";
    i++;
  }

  i -= 2;
  
  //lower part of the diamond
  while (i != 0){

    for(int j = 0; j != length - i;j++){
      cout<<" ";
    }

    for(int g = i;g != 0;g--){
      cout << string[length - g];
    }

    cout << "\n";
    i--;
  }
}


int main(){

  char string[1000];
  cin.getline(string, 1000);

  nameDiamond(string);

  return 0;
}
