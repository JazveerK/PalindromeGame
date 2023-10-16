//Jazveer Kaler
//Student List
// 10/16/2023

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

void add();
void print();
void delete();

struct student {
  char firstName[15];
  char lastName[15];
  int studentID;
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


void add() {

}

void print() {

}

void delete() {

}
