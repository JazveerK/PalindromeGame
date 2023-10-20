//Jazveer Kaler
//Student List
// 10/16/2023

//Levi helped me with a lot of the pointer stuff

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

void add(vector<student*>*v);
void print(vector<student*>*v);
void del(vector<student*>*v);

struct student {
  char firstName[15];
  char lastName[15];
  int ID;
  float gpa; 
};

int main () {
  bool running = true;
  char command[15];

  vector<student*> students; 
  
  while (running == true) {
    cout << "Type in a command: ADD, PRINT, DELETE, or QUIT " << endl;
    cin.get(command, 16)
    cin.ignore(16. '\n')

      if (strcmp(commmand, "ADD") == 0) {
	
      }
    
      else if (strcmp(commmand, "PRINT") == 0) {

      }

      else if (strcmp(commmand, "DELETE") == 0) {

      }

      else if (strcmp(commmand, "QUIT") == 0) {
	cout << "Program ended." << endl;
	running = false;
      }
  }
  return 0;
}


void add(vector<student*>*v) {
  char inputFN[10];
  chat inputLN[10];
  int inputID;
  float inputGPA;

  cout << "Student First Name: " << endl;
  cin >> inputFN;
  cout << "Student Last Name: " << endl;
  cin >> inputLN;
  cout << "Student ID: " << endl;
  cin << inputID;
  cout << "StudentGPA: " << endl;
  cin >> inputGPA;
  vector<int>::iterator iter = v->begin();
  cin.ignore(11, '\n');

  //Levi Lao
  //inputs to vector
  student* student = new student();
  strcopy(student ->firstName, inputFirst);
  strcopy(student ->lastName, inputLast);
  student ->id = inputID;
  student->gpa = inputGPA;
  vect -> push_back(student);

  cout << "Student Added" << endl << endl;
  
  
}

void print(vector<student*>*v) {
  vector<student*>::iterator i = v->begin(); 
  for (i; i < v->end(); i++) {
    cout << (*i)->firstName << " " << (*i)->lastName << ", " << (*i)->studentID << ", " << fixed << setprecision(2) << (i*) ->GPA << endl; //Levi Lao helped with precision 
  }

  
  cout << "Students Printed" << endl << endl; 
  
}

void del(vector<student*>*v) {
  int search;
  cout << "Enter the ID for the student you want to delete: " << endl;
  cin >> search;
  
  
  vector<student*>::iterator i = v->begin();
  for (i; i < v->end(); i++) {
    if (search == (*i) -> ID) {
      delete *i;
      v-> erase(i);
      break;
    }
  }

  cout << "Student Deleted" << endl;
}
