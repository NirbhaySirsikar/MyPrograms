#include <iostream>

using namespace std;
class Employee
{
private:
    double salary;

public:
    void setsal(double s)
    {
        salary = s;
    }
    double getsal()
    {
        return salary;
    }
};
int main()
{
    double sal;
    cout << "Enter salary" << endl;
    cin >> sal;
    Employee e;
    e.setsal(sal);
    cout << "salary is " << e.getsal();
    return 0;
}