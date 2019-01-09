#include <iostream>
using namespace std;

const size_t maxPower = 50;

struct Poly{
  double coefs[maxPower];
  size_t power;
};

Poly diff(Poly P){
  for(int i = 0;i <= P.power;i++){
    P.coefs[i] = P.coefs[i]*(P.power - i);
  }
  P.power = P.power-1;
  return P;
}
void printPoly(Poly P){

  for(int i = 0;i <= P.power;i++){
    if(P.coefs[i] != 0){
      if(i > 0){

        if(P.coefs[i] < 0 && (P.power - i) != 0){
            cout << P.coefs[i] << "*" << "x^" << P.power-i << " ";
          } else if (P.coefs[i] > 0 && (P.power - i) != 0) {
            cout << "+ " << P.coefs[i] << "*" << "x^" << P.power-i << " ";
          } else if(P.power - i == 0){
            cout << "+ " << P.coefs[i] << " ";
          } else {
            cout << P.coefs[i] << "*" << "x^" << P.power-i << " ";
          }
          
        } else {
          if ((P.power - i) != 0) {
            cout << P.coefs[i] << "*" << "x^" << P.power-i << " ";
          } else {
            cout << P.coefs[i] << " ";
          }
        }

      }
    }
}

int main(){

  Poly Q;
  Q.power = 3;
  Q.coefs[0] = -1;
  Q.coefs[1] = 3;
  Q.coefs[2] = -2;
  Q.coefs[3] = 8;
  printPoly(Q);
  Poly Q1 = diff(Q);
  cout << endl;
  printPoly(Q1);



  return 0;
}
