#include <iostream>

using namespace std;

class first
{
private:
    static int x;
    static int y;

public:
    static void output()
    {
        cout << "X =" << x << endl;
        cout << "Y =" << y << endl;
    }
};

int first ::x = 10;
int first ::y = 20;
int main()
{
    first obj;
    cout << "Printing through object name : " << endl;
    obj.output();
    cout << "Printing through class name : " << endl;
    first::output();
    return 0;
}