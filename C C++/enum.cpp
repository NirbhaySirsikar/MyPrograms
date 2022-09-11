#include <iostream>
using namespace std;

enum year
{
    Jan,
    Feb,
    Mar,
    Apr,
    may,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main()
{
    year i;
    for (int i = 0; i <= Dec; i++)
    {
        cout << i + 1 << " ";
    }

    // cout << "\nEnter the month : ";
    return 0;
}
