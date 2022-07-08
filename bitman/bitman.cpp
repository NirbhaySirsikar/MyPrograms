#include <bits/stdc++.h>
using namespace std;

int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearBit(int n, int pos)
{
    return (n & (~(1 << pos)));
}
int updateBit(int n, int pos, int value)
{
    n = clearBit(n, pos);
    return (n | (value << pos));
}
/*
int main()
{
    cout << getbit(3, 2) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearBit(5, 2) << endl;
    cout << updateBit(5, 1, 1);

    return 0;
}
*/