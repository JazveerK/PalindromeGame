//Jazveer Kaler
//Tic Tac Toe
//September 25th, 2023

#include <iostream>
#include <cstring>
using namespace std;

void printBoard(int board[3][3]);
void resetBoard(int board[3][3], int winsX, int winsO, bool playing);
bool checkWin(int player, int board[3][3]);
const int BLANK = 0;
const int playerX = 1;
const int playerO = 2;
const int turnX = 0;
const int turnO = 1;

int main () {
  int board[3][3]; 
  int moves = 0;
  int turn;
  int winsX = 0;
  int winsO = 0;
  int ties = 0;
  bool playing = true;
  char play;
  char pos[2];
  
  while (playing == true) {

    printBoard(board);
    
    if (turn == turnX) 
      cout << "\nX, where do you want to play? enter a letter followed by a number" << endl;
      else
	cout << "\nO, where do you want to play? enter a letter followed by a number" << endl;
      

      cin.get(pos, 2);
      cout << pos << endl;
      int row = pos[0];
      int col = pos[1];

      moves++;

      if (board[row][col] == BLANK) {
	if (turn == turnX) {
	  board[row][col] = playerX;
	  turn = turnO;
	}
	else if (turn == turnO) {
	  board[row][col] = playerO;
	  turn = turnX;
	}
      }
      else {
	cout << "invalid move" << endl;
	break;
      }
      
      printBoard(board);

      if (checkWin(playerX, board) == true) {
	cout << "X wins!" << endl;
	winsX++;
	turn = turnX;
	resetBoard(board, winsX, winsO, playing);
	
      }
	

      if (checkWin(playerO, board) == true) {
	turn = turnX;
	cout << "O wins!" << endl;
	winsO++;
	resetBoard(board, winsX, winsO, playing);
	
      }

       else if (moves = 9) {
	 turn = turnX;
	 cout << "Tie!" << endl;
	 resetBoard(board, winsX, winsO, playing);
	
       }
		  
    
  }
}
    
void resetBoard(int board[3][3], int winsX, int winsO, bool playing) {
     char play;
     cout << "X Wins: " << winsX << "    O Wins: " << winsO << endl;
     cout << "do you want to play again? y or n" << endl;
     cin >> play;
	if (play == 'y') {
	  for (int row = 0; row < 4; row++) {
	    for (int column = 0; 4; column++) {
	      board[row][column] = BLANK; // reset board
	    }
	  }
	}
	else {
	  playing = false;
	}
    }

   void printBoard(int board[3][3]) {
     int count = 0;
     char output[16];
     
     
      for (int row = 0; row < 4; row++) {
	for (int col = 0; col < 4; col++) {
	  if (board[row][col] == BLANK) {
	    output[count] = ' ';
	  }
	  if (board[row][col] == playerX) {
	    output[count] = 'X';
	  }
	  else {
	    output[count] = 'O';
	  }
      }
	cout << output << endl;
     
    }
 }

  bool checkWin(int player, int board[3][3]) {
    if (board[0][0]==player && board[0][1]==player && board[0][2]==player)
      return true;

    if (board[1][0]==player && board[1][1]==player && board[1][2]==player)
      return true;

    if (board[2][0]==player && board[2][1]==player && board[2][2]==player)
      return true;

    if (board[0][0]==player && board[1][0]==player && board[2][0]==player)
      return true;

    if (board[0][1]==player && board[1][1]==player && board[2][1]==player)
      return true;

    if (board[0][2]==player && board[1][2]==player && board[2][2]==player)
      return true;

    if (board[0][0]==player && board[1][1]==player && board[2][2]==player)
      return true;

    if (board[0][2]==player && board[1][1]==player && board[2][0]==player)
      return true;

    else
      return false;
  }

 
