// 1. We will consider first element of that array as the minimum and search the array for the minimmum value.
// 2. We will replace the min value in the beggining and take nest iteration from the next element.
// 3. We will repeat STEP 1 and 2 until no more elements are left to sort.
#include <iostream>
using namespace std;
int main()
{
    int a[] = {25, 34, 43, 19, 11, 27, 35, 9, 5, 47};
    int min;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        min = a[i];
        for (int j = i; j < 10; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                a[j] = a[i];
                a[i] = min;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}
