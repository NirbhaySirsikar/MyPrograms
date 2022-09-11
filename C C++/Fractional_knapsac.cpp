#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    double temp1, temp2;
    double frac = 1.00;
    double w = 50;
    double fw = 0, fv = 0;
    double a[3][2] = {{60, 10}, {100, 20}, {120, 30}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << a[i][j]<<" ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i][0] / a[i][1] < a[j][0] / a[j][1])
            {
                temp1 = a[i][0];
                temp2 = a[i][1];
                a[i][0] = a[j][0];
                a[i][1] = a[j][1];
                a[j][0] = temp1;
                a[j][1] = temp2;
            }
        }
    }
    cout << "_________________________" << endl;
    cout << "|Volume\tWeight\tAmount\t|" << endl;
    cout << "_________________________" << endl;
    for (int i = 0; i < 3; i++)
    {
        // fw += frac*a[i][1];
        if (fw + a[i][1] > w)
        {
            frac = (w - fw) / (a[i][1]);
        }
        // fw -= a[i][1];
        fw += frac * a[i][1];
        fv += frac * a[i][0];
        cout <<"|"<< a[i][0] << "\t| " << a[i][1] << "\t| " << frac <<"\t| "<< endl;
    }
    cout << "_________________________" << endl;
    cout << "The maximum value is :" << fv;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << a[i][j]<<" ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
