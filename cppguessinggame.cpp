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
    while(true){
      cout << "type in a number between 0 and 100: " << endl;
      int guess;
      cin >> guess;
      if(guess == randnum){
	guesses += 1;
	cout << "you got it! play again? (y/n) " << endl;
	cin >> playagain;
	break;
      }
      else if(guess > randnum){
	guesses += 1;
	cout << "your number is too high! try again! " << endl;
      }
      else{
	guesses += 1;
	cout << "your number is too low! try again! " << endl;
      }
    }
  }
  return 0;
}
