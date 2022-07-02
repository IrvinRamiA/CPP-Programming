#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string some_text = "This is a new text";

    cout << "Initial value of some_text is: " << some_text << endl;

    getline(cin, some_text);

    cout << "You entered " << some_text << endl;

    return 0;
}
