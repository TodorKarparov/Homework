/*
Да се напише програма, която по въведен низ от стандартния вход,
проверява дали скобите в низа са балансирани. 
Да се поддържат следните видове скоби - (40,41), {123,125}, <60,62> и [91,93]. Пример:

Балансирани - (){}, ({[]}[]) Небалансирани - ][, ({)}
*/




#include <iostream>
using namespace std;




//function that scans and evaluates bracket use
bool bracketCheck (char string[]) {

    int parentheses = 0, crlBrackets = 0, sqrBrackets = 0, trnglBrackets = 0;

    for (int i; string[i] != '\0'; i++) {

        //detects which type of brackets is used
        //T: Нарочно ползвам "else if" вместо просто "if" струва ми се по-подредено.
        if (string[i] == '(') {
            parentheses += 1;
        } else if (string[i] == ')') {
            parentheses -= 1;
        } else if (string[i] == '[') {
            sqrBrackets += 1;
        } else if (string[i] == ']') {
            sqrBrackets -= 1;
        } else if (string[i] == '{') {
            crlBrackets += 1;
        } else if (string[i] == '}') {
            crlBrackets -= 1;
        } else if (string[i] == '<') {
            trnglBrackets += 1;
        } else if (string[i] == '>') {
            trnglBrackets -= 1;
        }

        //detects if a closing bracket was used before an opening one
        if (parentheses < 0) {
            cout << "A closing bracket was used before an opening one!";
            return false;
        }
        if (trnglBrackets < 0) {
            cout << "A closing bracket was used before an opening one!";
            return false;
        }
        if (sqrBrackets < 0) {
            cout << "A closing bracket was used before an opening one!";
            return false;
        }
        if (crlBrackets < 0) {
            cout << "A closing bracket was used before an opening one!";
            return false;
        }

    }

    // checks whether the brackets are balanced or not
    if (parentheses != 0) {
        cout << "Brackets are incorrect!";
        return false;
    }
    if (trnglBrackets != 0) {
        cout << "Brackets are incorrect!";
        return false;
    }
    if (sqrBrackets != 0) {
        cout << "Brackets are incorrect!";
        return false;
    }
    if (crlBrackets != 0) {
        cout << "Brackets are incorrect!";
        return false;
    }


    cout << "Brackets are correct!";

    return true;
}


int main () {

    char bracketSentance[100];

    cin.getline(bracketSentance, 100);

    bracketCheck(bracketSentance);


    return 0;
}