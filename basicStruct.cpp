#include <iostream>
using namespace std;

struct student{
  char name[50];
  int facultyNumber;
  int group;
  float grades;
};

int main(){

  student t;
  cout << "Enter student name: " << endl;
  cin >> t.name;
  cout << "Enter Faculty number: " << endl;
  cin >> t.facultyNumber;
  cout << "Enter group: " << endl;
  cin >> t.group;
  cout << "Enter grade: " << endl;
  cin >> t.grades;

  cout << endl << "Output: " << endl;
  cout << "Name: " << t.name << endl;
  cout << "Faculty number: " << t.facultyNumber << endl;
  cout << "Group: " << t.group << endl;
  cout << "Grade: " << t.grades << endl;


  return 0;
}
