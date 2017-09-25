#include <cstdlib>
#include <ctime> 
#include <iostream>
#include <string>

using namespace std;

int main()
{

        /*
        initialize random seed. Do this only once at the beginning of the main-function
        */ 
  srand ( time(NULL) ); 

  int randomNumber; // this variable will hold the random number
        /* 
        generate secret number: between 1 and 10. Change the 10 to a different value to
        generate random numbers up to that maximum value 
        */ 
  randomNumber = rand() % 10 + 1;
  cout<<"Guess the computer's number:"<<endl;
 
 int Guess;       
 
 cin>>Guess;
 
        if(Guess == randomNumber)
 {
    cout<<"You guessed correctly! You win!"<<endl;
 }
        else if(Guess < randomNumber)
 {
    cout<<"You were off by "<<randomNumber - Guess<<" Sorry, you lose."<<endl;
 }
        else if(Guess > randomNumber)
 {
    cout<<"you were off by "<<Guess - randomNumber<<" Sorry, you lose."<<endl;
 }






return(0);
}
