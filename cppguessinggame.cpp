#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
  char playagain = 'y';
  while(playagain == 'y'){
    srand (time(NULL)); //initialize the random seed
    int randnum = rand()%101; //create the random variable
    int guesses = 0; //counts how many guesses the reader used
    while(true){ //while the user has not guessed the number
      cout << "type in a number between 0 and 100: " << endl;
      int guess;
      cin >> guess; //prompts the user for a guess at the number
      guesses += 1; //update amount of guesses
      if(guess == randnum){  //if the user got it correct, tell them and ask them if they want to play again
	cout << "you got it in " << guesses << " guesses! play again? (y/n) " << endl;
	cin >> playagain;
	break;
      }
      //otherwise, tell them if they are higher or lower
      else if(guess > randnum){
	cout << "your number is too high! try again! " << endl;
      }
      else{
	cout << "your number is too low! try again! " << endl;
      }
    }
  }
  return 0;
}
