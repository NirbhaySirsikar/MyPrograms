#include <iostream>

using namespace std;

struct custom
{
    int no;
    char name[50];
};

int main()
{
    custom c1;
    cout << "enter the number :";
    cin >> c1.no;
    cout << "enter name :";
    cin >> c1.name;
    cout << "Display \n number: " << c1.no << "\nname" << c1.name;
}