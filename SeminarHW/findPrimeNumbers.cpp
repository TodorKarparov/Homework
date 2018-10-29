    /* This is a program that prints all prime numbers before the number you entered. */

#include <iostream>

using namespace std;

    //input function
    int enterNumber(){

        int n;
        cout << "Enter number N= ";
        cin >> n;
        cout << "\n";
        return n;
        
    }

    //function for number evaluation - prime or composite
    bool isPrime (int number) {

        if (number == 1) {
            return false;
        }

        if (number == 2) {
            return true;
        }

        if (number % 2 == 0) {
            return false;
        }

        //the above "if" statements cut the operations in half because every prime number greater than 2 is also odd
        //it also cuts the number of dividers used by the function in half

        for (int divider = 3; divider < number; divider += 2){

            if (number%divider == 0) {
                return false;            
            }

        }
        
        return true;
    }

    //function which prints all prime numbers found before the input number
    int printPrimeNumbers(int n){
        
        if (n == 2){

            cout << "No prime numbers before 2!";
            return 0;
        }

        if (n == 1) {

            cout << "No prime numbers before 2!";
            return 0;
        }

        int numberInQuestion = 0;

        while(numberInQuestion < n) {

            if (isPrime(numberInQuestion) == true) {
                cout << numberInQuestion << " ";
                numberInQuestion++;

            } else {
                numberInQuestion++;
            }
        
        }

    }


int main () {

    int n = enterNumber();

    printPrimeNumbers(n);

    return 0;
}