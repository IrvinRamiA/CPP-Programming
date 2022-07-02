#include <iostream>
using namespace std;

void addition(int a, int b, int c);

int main(void)
{
    int a = 1;
    int b = 4;
    int c = 3;

    addition(a, b, c);

    return 0;
}

void addition(int a, int b, int c)
{
    cout << a + b + c;
}
