#include <bits/stdc++.h>
using namespace std;
int num;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Bubblesort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                cout<<"("<<a[j]<<","<<a[j+1]<<")"<<endl;
                swap(&a[j], &a[j + 1]);
                num++;
            }
        }
    }
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }
}
int main()
{
    int a[] = {3, 5, 1, 9, 6, 0, 4};
    int n = 7;
    Bubblesort(a, n);
    print(a, n);
    cout<<endl;
    cout<<num;
}