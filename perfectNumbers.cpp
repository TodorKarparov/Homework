/* 
This is a program which adds all "perfect numbers" up to the number entered by the user.
*/


#include <iostream>
using namespace std;

//input function
int inputNumber(){

    int n;
        cout << "Enter number N= ";
        cin >> n;
        cout << "\n";
        return n;
}

// function to check if a number is perfect
bool isPerfect (int number) {
    if (number < 4){
       return false;
    }

    int divider = 1;
    int dividerSum = 0;
    while (divider < number){

        if (number%divider == 0){
            dividerSum += divider;
        }

        divider++;
    }
    if (dividerSum == number){
        return true;
    }
    return false;
}

// function that adds all perfect numbers up to the numbered entered by the user
int addPerfectNumbers(int n) {

    int testNumber = 1, perfectSum = 0;

    while (testNumber < n) {
        bool answer = isPerfect(testNumber);
        
        if (answer == true){
            perfectSum += testNumber;
        }
        testNumber++;
    }
    cout << "The sum of all perfect numbers upto " << n << " is " << perfectSum;
    return perfectSum;
}

int main () {

    int n = inputNumber();

    addPerfectNumbers(n);
    return 0;
}


