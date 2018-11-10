//Replace
#include <iostream>
using namespace std;

void replace(char str[], char replaced, char replacement) {

  int counter = 0;
  for (int i = 0; str[i] != 0; i++){
    if(str[i] == replaced){
      str[i] = replacement;
      counter++;
    }
  }

  for (int i = 0;str[i] != 0;i++){
    cout << str[i];
  }
  cout << "\n" << counter << " replacements made.";
}



int main() {

  char str[1000];
  char replaced, replacement;

  cin.getline(str, 1000);
  cin >> replaced >> replacement;

  replace(str, replaced, replacement);

  return 0;
}
