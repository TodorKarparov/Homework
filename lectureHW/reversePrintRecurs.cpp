#include <iostream>
using namespace std;

void reverse(int n){
  if(n == 0){
    return;
  }

  int x;
  cin >> x;
  reverse(n-1);
  cout << x;
}

int main(){

  int n;

  cin >> n;

  reverse(n);

  return 0;
}
