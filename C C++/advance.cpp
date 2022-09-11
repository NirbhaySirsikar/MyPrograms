#include <iostream>

using namespace std;

class enemy
{
public:
    virtual void attack()
    {
        cout << "you are inside enemy class" << endl;
    }
};
class ninja : public enemy
{
public:
    void attack()
    {
        cout << "Ninjaaa!!!!!!" << endl;
    }
};
class monster : public enemy
{
public:
    void attack()
    {
        cout << "Monsterrrr!!!!!!" << endl;
    }
};

int main()
{
    ninja n;
    monster m;
    enemy *e1 = &n;
    enemy *e2 = &m;
    e1->attack();
    n.attack();
}