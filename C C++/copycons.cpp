#include <iostream>

using namespace std;

class a
{
public:
    int d;
    int m;
    int y;
    a(int d, int m, int y)
    {
        this->d = d;
        this->m = m;
        this->y = y;
    }
    void output()
    {
        cout << "The date you entered is :\n\n"
             << d << "/" << m << "/" << y << endl;
    }
    ~a()
    {
        cout << "destructor";
    }
};

int main()
{
    a obj(10, 8, 2021);
    obj.output();
    return 0;
}