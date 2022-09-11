#include <iostream>

using namespace std;

class BOX
{
public:
    int box_length, box_width, box_height;
    void accept();
    void display();
};
void BOX::accept()
{
    cout << "\n-------------Assigning value---------------";
    cout << "\nEnter the length of the box : ";
    cin >> box_length;
    cout << "\nEnter the width of the box : ";
    cin >> box_width;
    cout << "\nEnter the height of the box : ";
    cin >> box_height;
}
void BOX::display()
{
    cout << "\n-------------Printing value---------------";
    cout << "\nThe length of the box : " << box_length;
    cout << "\nThe width of the box : " << box_width;
    cout << "\nThe height of the box : " << box_height;
}
int main()
{
    int i, n;
    cout << "\nEnter the number of boxes you need : ";
    cin >> n;
    BOX object[n];
    for (int i = 0; i < n; i++)
    {
        object[i].accept();
    }
    for (int i = 0; i < n; i++)
    {
        object[i].display();
    }

    return 0;
}