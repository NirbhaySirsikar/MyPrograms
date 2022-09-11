#include <iostream>
using namespace std;
#define pi 3.14
float area(float r)
{
    return pi * r * r;
}
float area(int a, int b)
{
    return a * b;
}
float area(float x, float y)
{
    return 0.5 * x * y;
}
int area(int a)
{
    return a * a;
}
int main()
{
    char shape;
    float r, l, b;
    int s, a, ba;
    float circle, rectangle, triangle;
    int square;
    cout << "enter your choise:" << endl;
    cout << "1.circle" << endl;
    cout << "2.triangle" << endl;
    cout << "3.square" << endl;
    cout << "4.rectangle" << endl;
    cin >> shape;
    switch (shape)
    {
    case '1':
        cout << "enter radius:" << endl;
        cin >> r;
        circle = area(r);
        cout << "area: " << circle << endl;
        break;
    case '2':
        cout << "enter height and base:" << endl;
        cin >> a >> ba;
        cout << "area: " << area(a, ba) << endl;
        break;
    case '3':
        cout << "enter side lenght:" << endl;
        cin >> s;
        cout << "area: " << area(s) << endl;
        break;
    case '4':
        cout << "enter lenght and breath:" << endl;
        cin >> l >> b;
        cout << "area: " << area(l, b) << endl;
        break;
    default:
        cout << "invalid input!" << endl;
        break;
    }
}