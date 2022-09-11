#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int *ptr;
    int num;
    cout << "Enter number of elements in your array:" << endl;
    cin >> num;

    ptr = (int *)calloc(num, sizeof(int));
    if (ptr == NULL)
    {
        cout << "Memory Allocation Unsuccessfull!" << endl;
    }
    else
    {
        cout << "Memory Allocation Successfull" << endl;
    }
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> ptr[i];
    }
    sort(ptr, ptr + num);
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
    free(ptr);
    cout << "Calloc memory freed";
}