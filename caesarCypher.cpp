#include <iostream>
using namespace std;

//caeser's cypher
int standardInput(){
  int n;
  cout << "Enter command (1-cypher sentance/0 - decypher sentance)" << "\n";

  do{
    cin >> n;
    if(n == 0 || n == 1){
      return n;
    }
    cout << "Wrong command! Try again!" << "\n";
  } while (n != 0 || n != 1);
}

void printString(char string[]){
  for(int i = 0;string[i] != '\0';i++){
    cout << string[i];
  }
}

char* cypherString(char inputString[]){

  int m;
  cout << "Enter cyphering key: ";
  cin >> m;

  for (int i = 0;inputString[i] != '\0';i++){
    inputString[i] += m;
  }

  return inputString;
}

char* decypherString(char inputString[]){

  int key;
  cout << "Enter key: ";
  cin >> key;
  key = 0 - key;

  for (int i = 0;inputString[i] != '\0';i++){
    inputString[i] += key;
  }

  return inputString;
}

int main () {

  char inputString[10000];
  char* outputString;

  cout << "Enter text: "<<endl;
  cin.getline(inputString, 10000);
  int instruction = standardInput();

  if (instruction == 1){

    outputString = cypherString(inputString);
    printString(outputString);

    return 0;
  } else if (instruction == 0) {

  outputString = decypherString(inputString);
  printString(outputString);

  return 0;
}
return 0;
}
