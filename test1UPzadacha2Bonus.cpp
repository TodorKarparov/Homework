#include <iostream>
using namespace std;

long long standardInput() {
  long long n;
  cout << "n=";
  cin >> n;
  return n;
}

void numberInput(long long n){
  double a2;
  double arr[100000];
  long counter = 0;
  for (long i = 0; i < n;i++){

    cin >> a2;
    arr[i] = a2;
    if (i > 1) {

      double sum = 0;

      for (long g = 1; arr[g] != '\0'; g++){
        sum = sum + arr[i - g];
        if (sum == a2){
          counter++;
          break;
        }
      }

    }
  }
  cout << counter;
}


int main () {

  long long n = standardInput();
  numberInput(n);

  return 0;
}
