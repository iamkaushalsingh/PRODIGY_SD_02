# Number Guessing Game

## Description
This C++ program is a basic number guessing game where the user tries to guess a randomly generated number between 1 and 10. After each guess, the program provides feedback on whether the guess is too high or too low, and continues to prompt the user until the correct number is guessed. Finally, it displays the total number of attempts made to find the correct number.

## Features

- Generates a random number between 1 and 10.
- Provides feedback on whether the guessed number is too high or too low.
- Keeps track of the number of attempts.
- Displays the correct number and the total number of attempts once the user guesses correctly.

## Requirements

- A C++ compiler (e.g., g++, clang++).
- Standard C++ library.

## How to Run

1. **Compile the Program:**
    Open a terminal or command prompt and navigate to the directory containing the `guessing_game.cpp` file. Then, compile the program using a C++ compiler. For example:
    ```sh
    g++ -o guessing_game guessing_game.cpp
    ```

2. **Run the Program:**
    After compiling the program, you can run it by executing the following command:
    ```sh
    ./guessing_game
    ```

3. **Play the Game:**
    Follow the on-screen prompts to guess the number. Enter your guess and press Enter. The program will guide you until you guess the correct number.

## Key Components

- **Random Number Generation:**
    ```cpp
    int random = rand() % 10 + 1;
    ```
    This line generates a random number between 1 and 10.

- **Success Message:**
    ```cpp
    cout << "You guessed it right!" << endl << "The number is " << random << ". Number of attempts: " << attempt;
    ```
    Displays a success message along with the correct number and the total number of attempts.

## Notes

- The random number generation using `rand()` is seeded by the system time by default. For better randomness, you can seed it manually at the beginning of the program using `srand(time(0));`.
- Ensure that the C++ standard library is available in your development environment.

Enjoy the game!
