#include <iostream>
using namespace std;

int N;
int Q;
int ar[2][1001];

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin >> ar[i][j];
        }
    }

    cin >> Q;
    for(int i=0;i<Q;i++)
    {
        char buff1[5], buff2[5];
        int x, y;
        cin >> buff1 >> x >> buff2 >> y;
        int p = buff1[0] - 'A';
        int q = buff2[0] - 'A';
        x--;
        y--;
        swap(ar[p][x], ar[q][y]); 
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout << ar[i][j];
            if(j<N-1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
