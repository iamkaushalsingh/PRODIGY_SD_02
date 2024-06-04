#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int random = rand() % 10 + 1; 
    int attempt = 0;
    int guess;

    cout << "Enter a number between 1 and 10: ";

    do {
        cin >> guess;
        attempt++;

        if (guess > random) {
            cout << "Number is too large. Enter a smaller number: ";
        } else if (guess < random) {
            cout << "Number is too small. Enter a larger number: ";
        }
    } while (guess != random);

    cout << "You guessed it right!" << endl 
         << "The number is " << random << ". Number of attempts: " << attempt << endl;

    return 0;
}
