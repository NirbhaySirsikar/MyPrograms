#include <iostream>
#include <string>

using namespace std;

class student
{
public:
    int rno;
    string s_name;
    float t_marks;
    void display()
    {
        cout << "Student name is " << s_name << endl;
        cout << "roll no is " << rno << endl;
    }
    //void perc();
};
int main()
{
    student s;
    s.rno = 12;
    s.s_name = "ABC";
    s.t_marks = 786;
    s.display();
    //s.perc();
    return 0;
}
