/*
Да се напише програма, която проверява колко силна е подадена на стандартния вход парола. 
Използвайте правилата, описани в този сайт: http://www.passwordmeter.com/ . 
Игнорирайте правилото Repeat Characters (Case Insensitive).
Minimum 8 characters in length
Contains 3/4 of the following items:
- Uppercase Letters
- Lowercase Letters
- Numbers
- Symbols
*/
// -----------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;


//this function checks if the password is of the correct legth
bool stringCharNumberCheck (char string[]) {
    int i = 0;
    while (string[i] != '\0'){
        i++;
    }
    if (i < 8){
        return false;
    }

    return true;
}


//this function checks if the primary requirements for a strong password are met
bool passwordStrengthCheck (char string[]){
    bool correctLength = stringCharNumberCheck(string);
    
    if (correctLength == false){
        cout << "Password too short!";
        return false;
    }
        bool uppercaseLetter = false;
        bool lowercaseLetter = false;
        bool number = false;
        bool symbol = false;

        for (int i = 0; string[i] != '\0'; i++) {

            if (string[i] > 47 && string[i] < 58){
                number = true;
            } else if (string[i] > 64 && string[i] < 91){
                uppercaseLetter = true;
            } else if (string[i] > 96 && string[i] < 123){
                lowercaseLetter = true;
            } else {
                symbol = true;
            }

        }
    
        if (number + symbol + lowercaseLetter + uppercaseLetter > 2) {
            cout << "Your password is strong!" << "\n";
            return true;
        } else {
            cout << " Your password is too weak!" << "\n";
            return false;
        }
    }

int main () {

    char password[100];
    cout << "Enter pass: ";
    cin >> password;

    passwordStrengthCheck(password);

    return 0;
}