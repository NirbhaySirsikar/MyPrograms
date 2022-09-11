/* Let us create following weighted graph
                   10
              0--------1
              |  \     |
             6|   5\   |15
              |      \ |
              2--------3
                  4       */
#include <iostream>
using namespace std;
class graph
{
public:
    int edge, src, des, flag = 0;
    void add(int edge, int src, int des)
    {
        this->edge = edge;
        this->src = src;
        this->des = des;
    }
};

int main()
{
    int min;
    graph g[5];
    g[0].add(10, 0, 1);
    g[1].add(6, 0, 1);
    g[2].add(4, 2, 3);
    g[3].add(15, 3, 1);
    g[4].add(5, 0, 3);
    cout << "Unsorted edges:\t";
    for (int i = 0; i < 5; i++)
    {
        cout << g[i].edge << "\t";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        min = g[i].edge;
        for (int j = i; j < 5; j++)
        {
            if (g[j].edge < min)
            {
                min = g[j].edge;
                g[j].edge = g[i].edge;
                g[i].edge = min;
            }
        }
    }
    cout << "Sorted edges:\t";
    for (int i = 0; i < 5; i++)
    {
        cout << g[i].edge << "\t";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        if (g[i].flag == 1)
        {
            continue;
        }
        else
        {
            for (int j = 0; j < 5; j++)
            {
                if ((g[i].src == g[j].des || g[i].src == g[j].src) && (g[i].des == g[j].des || g[i].des == g[j].src))
                {
                    continue;
                }
                else
                {
                    g[i].flag = 1;
                }
            }
        }
        cout << "Weight\tSrc\tdes" << endl;
        for (int i = 0; i < 5; i++)
        {
            if (g[i].flag == 1)
            {
                cout << g[i].edge << "\t" << g[i].src << "\t" << g[i].des << endl;
            }
        }

        return 0;
    }
}