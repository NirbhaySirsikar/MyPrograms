#include <iostream>

using namespace std;

class time
{
public:
    int hr;
    int min;
    time(int t)
    {
        hr = t / 60;
        min = t % 60;
    }
    void output()
    {
        cout << "Numbers of hours =" << hr << endl
             << "Number of minutes =" << min;
    }
};

int main()
{
    int d;
    cout << "Enter number of hours :";
    cin >> d;
    time t(d);
    t.output();
    return 0;
}