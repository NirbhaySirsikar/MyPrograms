#include <iostream>

using namespace std;

class BOX
{
public:
    int box_length, box_width, box_height;
    void assign();
    void print();
};
void BOX::assign()
{
    cout << "\n-------------Assigning value---------------";
    cout << "\nEnter the length of the box : ";
    cin >> box_length;
    cout << "\nEnter the width of the box : ";
    cin >> box_width;
    cout << "\nEnter the height of the box : ";
    cin >> box_height;
}
void BOX::print()
{
    cout << "\n-------------Printing value---------------";
    cout << "\nThe length of the box : " << box_length;
    cout << "\nThe width of the box : " << box_width;
    cout << "\nThe height of the box : " << box_height;
}
int main()
{
    BOX object1;
    object1.assign();
    BOX object2;
    object2.assign();
    object1.print();
    object2.print();
    BOX object3;
    object3.assign();
    object3.print();
    BOX object4;
    object4.assign();
    object4.print();
    return 0;
}