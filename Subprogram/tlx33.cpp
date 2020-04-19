#include <iostream>
#include <cmath>
using namespace std;

void tingkat_kedekatan_terkecil_terbesar(int &N, int x[], int y[], int &D)
{
    int hasil, MIN=2000000, MAX=-1;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            hasil = pow(abs(x[j] - x[i]), D)+pow(abs(y[j] - y[i]), D);
            if(hasil<MIN)
            {
                MIN = hasil;
            }
            if(hasil>MAX)
            {
                MAX = hasil;
            }
        }
    }
    cout << MIN << " " << MAX << endl;
}

int main()
{
    int N, D;
    cin >> N >> D;
    int X[N], Y[N];
    for(int i=0;i<N;i++)
    {
        cin >> X[i] >> Y[i];
    }
    tingkat_kedekatan_terkecil_terbesar(N, X, Y, D);
}