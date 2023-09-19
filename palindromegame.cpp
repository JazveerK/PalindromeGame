//Jazveer Kaler
//Palindrome
//Sep 7th, 2023
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  //initialize arrays
  char arr[81];
  char newarr[81];
  char arrBW[81];
  int k = 0;
  int z = 0;

  cout << "Input: " << endl;
  cin.get(arr, 80); //take in input
  
  for (int i = 0; i < strlen(arr) + 1; i++) { 
    if (ispunct(arr[i]) == false && arr[i] != ' ') { //filter punctuation and spaces
      newarr[k] = tolower(arr[i]); //everything in lowercase
	k++;
     }
  }

  for (int j = k-2; j > -1; j--) { //reverses array
    arrBW[z] = newarr[j];
    z++;
  }
  
  arrBW[z] = '\0'; //adds null char to end of array

  if (strcmp(newarr, arrBW) == 0) { //checks palindrome
    cout << "Palindrome." << endl;
  }
  else {
    cout << "Not a palindrome." << endl;
  }
  
  return 0;
}
