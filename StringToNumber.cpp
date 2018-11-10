#include <iostream>
using namespace std;


int charToInt(char str[]) {

  if ((str[0] < 48 && str[0] != '-') || str[0] > 57) {
    cout << 0;
    return 0;
  }

    cout << str[0];

  for (int i = 1; 1 > 0;i++) {

    if (str[i] < 48 || str[i] > 57) {
      break;
    }

    cout << str[i];

  }
  cout << " is valid!" << endl;

  return 0;
}



int main () {

  char str[1000];
  cin.getline(str, 1000);

  charToInt(str);

  return 0;
}
