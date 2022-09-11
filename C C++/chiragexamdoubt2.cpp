#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    person(string a = "chirag", int b = 18)
    {
        name = a;
        age = b;
    }
};
class admin : public virtual person
{
public:
    int emp_id;
    admin(int c = 1234)
    {
        emp_id = c;
    }
};
class account : public virtual person
{
public:
    int sal;
    account(int d = 500000)
    {
        sal = d;
    }
};
class employee : public admin, public account
{
public:
    int whr;
    employee(int e = 0)
    {
        whr = e;
    }
    void display()
    {
        cout << "employee name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "employee:" << emp_id << endl;
        cout << "salary:" << sal << endl;
        cout << "working hrs:" << whr << endl;
    }
    void update(string name1 = "abc", int a = 0, int b = 0, int c = 0, int e = 0)
    {
        name = name1;
        age = a;
        emp_id = b;
        sal = c;
        whr = e;
    }
};
int main()
{
    int df;
    employee e;
    cout << "enter 1 for display details:" << endl;
    cout << "enter 0 for update details:" << endl;
    cin >> df;
    if (df == 1)
    {
        e.display();
    }
    else
    {
        string name1;
        int a, b, c, d;
        cout << "enter employee name:" << endl;
        cin >> name1;
        cout << "enter employee age:" << endl;
        cin >> a;
        cout << "enter employee id:" << endl;
        cin >> b;
        cout << "enter employee salary:" << endl;
        cin >> c;
        cout << "enter employee hours:" << endl;
        cin >> d;
        e.update(name1, a, b, c, d);
        cout << "data updated successfully!" << endl;
        cout << "updated data here:" << endl;
        e.display();
    }
}