#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int *ptr;
    int num;
    cout << "The number of elements in array:" << endl;
    cin >> num;
    ptr = (int *)calloc(num, sizeof(int));
    if (ptr == NULL)
    {
        cout << "Memory allocation unsuccesfull!" << endl;
    }
    else
    {
        cout << "Memory allocation succesfull" << endl;
    }
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> ptr[i];
    }
    sort(ptr, ptr + num);
    cout << "The elements are:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << ptr[i] << " " << endl;
    }
}