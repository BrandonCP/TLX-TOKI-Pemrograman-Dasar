#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    int A[N][M];
    // iterasi hingga ke N kali untuk i dan ke M kali untuk j. Hal ini dilakukan untuk mendapatkan nilai matriks
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin >> A[i][j];
        }
    }

    //hasil matriks yang telah diputar searah jarum jam sebesar 90 derajat
    for(int i=0;i<M;i++)
    {
        for(int j=N-1;j>=0;j--)
        {
                cout << A[j][i];
            if(j>0)
            {
                cout << " ";
            } else
                cout << endl;
        }
    }
}