#include <iostream>
using namespace std;
class test
{
public:
    int a, b;
    static int count;
    test()
    {
        a = 10;
        b = 20;
        count++;
    }
};
int test::count = 0;
int main()
{
    test t1, t2;
    cout << t1.count << endl;
    cout << t2.count << endl;
    t1.count = 25;
    cout << t2.count << endl;
    cout << test::count << endl;
}
