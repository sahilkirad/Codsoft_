#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));

    int target = rand() % 10 ;
    int guess = 0;
    

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100.\n";
    cout << "Try to guess the number.\n";

    while (guess != target) {
        cout << "Enter your guess: ";
        cin >> guess;
      

        if (guess < 1 || guess > 10) 
        {
            cout << "Guess must be between 1 and 10. Try again.\n";
        } 
        else if (guess < target) 
        {
            cout << "Too low! Try again.\n";
        } 
        else if (guess > target) 
        {
            cout << "Too high! Try again.\n";
        } 
        else 
        {
            cout << "Congratulations! You guessed the number " ;
            break; 
        }
    }

    return 0;
}