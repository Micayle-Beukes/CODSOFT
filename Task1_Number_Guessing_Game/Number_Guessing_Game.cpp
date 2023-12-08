#include <iostream>
#include <ctime>

using namespace std;

int main() {
    cout << "***************** NUMBER GUESSING GAME *****************" <<'\n';

    cout << "You have 5 guesses!" << '\n';

    int guess;

    int guesses = 5;

    srand(time(0));

    int number = rand() % 5 + 1;
    
    while (guesses > 0) {
        cout << "Guess a number between (1 - 10):";
        cin >> guess;

        if (guess == number) {
            cout << "You guessed correctly!" << '\n';
            break;
        }
        else if (guess < number) {
            cout << "Your guess is too low." << '\n';
            guesses-=1;
            cout << "You have " << guesses << " guesses left." << '\n';
        }
        else if (guess > number) {
            cout << "Your guess is too high." << '\n';
            guesses-=1;
            cout << "You have " << guesses << " guesses left." << '\n';
        }

    }
    if (guesses == 0) {
        cout << "You ran out of guesses!" << '\n';
        cout << "The guess was: " << number << "." << '\n';
    }

    cout << "********************************************************";

    return 0;
}
