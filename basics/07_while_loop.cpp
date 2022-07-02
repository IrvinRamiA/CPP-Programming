// Guessing game
#include <iostream>
using namespace std;

int main(void)
{
    int searched = 5; // The value we're searching
    int given = -1;   // The variable to which we'll write user's guesses

    // Greet the user:
    cout << "This is simple guessing game:" << endl;
    cout << "Please enter a number:" << endl;

    // This while-loop will terminate when the user entered the searched value
    while (searched != given)
    {
        cin >> given; // Read a value from the keyboard

        cout << "Thank you for your guess..." << endl;
    }
    cout << "You found the correct number. Good bye." << endl;

    return 0;
}
