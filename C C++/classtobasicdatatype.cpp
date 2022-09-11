#include <iostream>

using namespace std;

class a
{
public:
    int n;
    a(int n)
    {
        this->n = n;
    }
    void output()
    {
        cout << "The value in class a is : " << n << endl;
    }
};
class b
{
public:
    int n;
    b(int n)
    {
        this->n = n;
    }
    void output()
    {
        cout << "The value in class b is : " << n << endl;
    }
};

int main()
{
    a obj1(10);
    b obj2(20);
    obj2.n = obj1.n;
    obj1.output();
    obj2.output();
}