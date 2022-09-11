#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;

    cout << "Enter Number : ";
    cin >> a;

    if (a == 0)

        cout << " The given number is zero ";

    else if (a % 2 == 0)

        cout << "Number " << a << " is even";

    else

        cout << "Number " << a << " is odd";

    return 0;
}
