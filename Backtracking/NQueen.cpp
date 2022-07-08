#include <bits/stdc++.h>
using namespace std;

/*
TODO:
helper function for basktracking
bcuz we dont have any nqueen function with array we are instead creating new aray in nqueen function. so we will use helper function to calculate remaining grid.

*/

bool isSafe(int **arr, int x, int y, int n)
{
    for (int row = 0; row < n; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }
    for (int col = 0; col < n; col++)
    {
        if (arr[x][col] == 1)
        {
            return false;
        }
    }
    for (int row = x, col = y; row >= 0 && col >= 0; row--, col--)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
    }
    for (int row = x, col = y; row >= 0 && col < n; row--, col++)
    {

        if (arr[row][col] == 1)
        {

            return false;
        }
    }
    for (int row = x, col = y; row < n && col < n; row++, col++)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
    }
    for (int row = x, col = y; row < n && col >= 0; row++, col--)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
    }

    return true;
}
void backtracking(int **arr, int n, int row)
{
    for (int i = 0; i < n; i++)
    {

        if (isSafe(arr, row, i, n))
        {
            arr[row][i] = 1;
            backtracking(arr, n, row + 1);
            arr[row][i] = 0;
        }
    }

    if (row == n)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }cout<<endl;
    }
}
void nqueen(int n, int row = 0)
{
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {

        if (isSafe(arr, row, i, n))
        {
            arr[row][i] = 1;
            backtracking(arr, n, row + 1);
            arr[row][i] = 0;
        }
    }
}

int main()
{
    nqueen(5);
    return 0;
}