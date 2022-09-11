#include <iostream>

using namespace std;

class complex
{
    int x, y;

public:
    void input(int a, int b)
    {
        x = a;
        y = b;
    }
    void output()
    {
        cout << x << " + " << y << "i";
    }
    complex operator+(complex A)
    {
        complex temp;
        temp.x = x + A.x;
        temp.y = y + A.y;
        return temp;
    }
};

int main()
{
    complex obj1, obj2, obj3;

    obj1.input(5, 10);
    obj2.input(15, 20);
    cout << endl;
    cout << endl;
    obj1.output();
    cout << endl;
    cout << endl;
    obj2.output();
    cout << endl;
    cout << endl;
    obj3 = obj1 + obj2;
    obj3.output();
    return 0;
}
