/*
    Copyright 2009 Tyler McMaster
    Copyright 2019-Present Tara Piccari
*/
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "Welcome to Guessing Game" << endl;
    bool gameIsRunning = true;
    int total = rand();
    int guess = 0;
    while (gameIsRunning)
    {
        total = rand();
        bool correct = false;
        while (!correct) // This statement, says, while not correct.  C-2022: Added note for my brother.
        {
            string entry;
            cout << "How many jellybeans are in the jellybean jar? ";
            cin >> entry;
            guess = atoi(entry.c_str());

            if (guess < total)
            {
                cout << "Too low" << endl << endl;
            }
            else if (guess > total)
            {
                cout << "Too high" << endl << endl;
            }
            else if (guess == total)
            {
                cout << "Correct!" << endl;
                correct = true;
            }
        }
        correct = false;
        while (!correct)
        {
            cout << "Play again? [y/n] ";
            string reply;
            cin >> reply;
            if (reply == "y")
            {
                correct = true;
            }
            else if (reply == "n") {
                correct = true;
                gameIsRunning = false;
            }

        }
    }

    cout << "Goodbye" << endl;
    return 0;
}