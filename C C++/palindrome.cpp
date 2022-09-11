#include <iostream>

using namespace std;

class palindrome
{
    int num, n;

public:
    void input(int a)
    {
        num = a;
    }
    int rev = num;

    void reverse()
    {
        while (num != 0)
        {

            n = n * 10 + num % 10;
            num = num / 10;
        }
    }
    void output()
    {
        if (n == rev)
        {
            cout << "The number is Palindrome" << endl;
        }
        else
        {
            cout << "The number is not Palindrome" << endl;
        }
    }
};

int main()
{
    int a;
    palindrome obj;
    cin >> a;
    obj.input(a);
    obj.output();

    return 0;
}
