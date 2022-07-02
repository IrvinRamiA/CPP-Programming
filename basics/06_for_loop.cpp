#include <iostream>
using namespace std;

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Hello C++" << endl;
    }

    /* Since C++ 11 */
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int n : arr)
    {
        cout << n << endl;
    }

    /*
    Warning: the example above will reference the original memory of arr[] and has write-access!

    As you often don't need to write to that adress-space, you should consider to access it read-only for safety reasons.
    To avoid write-access, you might consider using a const-reference like shown below,
    which will create a constant -and therefore unchangeable- reference named "n" to each existing value of "arr",
    effectively referncing the values read-only.

    You'll learn more about reference's and pointer's in the next chapters.
    */
    int arr2[] = {1, 2, 3, 4, 5, 6};

    for (const int &n : arr2)
    {
        cout << n << endl;
    }

    return 0;
}
