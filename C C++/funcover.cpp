#include <iostream>
using namespace std;
class calculate
{
public:
    void area(int, float);
    void area(int, int);
    void area(float, int, int);
    void area(int);
};

void calculate::area(int r, float p)
{
    cout << "Area of the circle is " << p * r * r;
}
void calculate::area(int a, int b)
{
    cout << "Area of the rectangle is " << a * b;
}
void calculate::area(float c, int h, int b)
{
    cout << "Area of the triangle is " << c * h * b;
}
void calculate::area(int a)
{
    cout << "Area of the Square is " << a * a;
}

int main()
{
    char ch;
    int a, b, r;
    float pi = 3.14;

    calculate obj;
    cout << "Enter @ for area of circle" << endl;
    cout << "Enter # for area of rectangle" << endl;
    cout << "Enter ^ for area of triangle" << endl;
    cout << "Enter % for area of square" << endl;
    cout << "Enter your output here: " << endl;
    cin >> ch;

    switch (ch)
    {
    case '@':
        cout << "Enter the radius of the circle : ";
        cin >> r;
        obj.area(r, pi);
        break;
    case '#':
        cout << "Enter the length of rectangle : ";
        cin >> a;
        cout << "Enter the breadth of rectangle : ";
        cin >> b;
        obj.area(a, b);
        break;
    case '^':
        cout << "Enter the hieght of the triangle: ";
        cin >> a;
        cout << "Enter the length of the triangle: ";
        cin >> b;
        obj.area(0.5, a, b);
        break;
    case '%':
        cout << "Enter the length of the side of the square : ";
        cin >> a;
        obj.area(a);
        break;

    default:
        cout << "Invalid input";
        break;
    }

    return 0;
}
