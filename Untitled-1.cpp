#include <iostream>
using namespace std;
struct Student {

    char name[100];
    char ID[10];
    size_t FN;
    char marks[100];

};
//Student s ще създаде копие на структурата, а подавайки адреса пипаме самата структура
void initialize(Student& s){
    cin.getline(s.name, 100);cin.ignore();
    cin.getline(s.ID, 10);cin.ignore();
    cin << s.FN;
    cin.getline(s.marks, 100);cin.ignore();
}



int main(){







    return 0;
}