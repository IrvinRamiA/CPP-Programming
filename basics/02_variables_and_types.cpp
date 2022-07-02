/*
Built-in Data Types:
- Boolean -> bool
- Characters -> char
- Integers -> int (4 bytes), short int (2 bytes), long int (8 bytes)
- Floating point numbers -> float and double
- Valueless -> void
- Wide char -> wchar_t

Type modifiers:
- signed
- unsigned short
- long

User defined:
- Structures - struct
- Classes - class

Typedefs:
typedef int counter;
counter tick_c = 100;

Enumerated types:
enum enum_name {list of names} va_list;

enum color {red, green, blue} a_color, another_color;
a_color = green;
*/

/* Defining variables */
#include <iostream>
using namespace std;

int main(void)
{
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    double sum;

    sum = a + b + c;

    cout << "The sum of a, b, and c is " << sum << endl;

    return 0;
}
