#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M, P;
    cin >> N >> M >> P;
    int A[N+1][M+1];
    //Masukkan nilai-nilai yang diinput ke dalam matriks A
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=M;j++)
        {
            A[i][j] = 0;
            cin >> A[i][j];
        }
    }
    
    int B[M+1][P+1];
    //Masukkan nilai-nilai yang diinput ke dalam matriks B
    for(int j=1;j<=M;j++)
    {
        for(int k=1;k<=P;k++)
        {
            B[j][k] = 0;
            cin >> B[j][k];
        }
    }

    int C[N+1][P+1];
    //Masukkan nilai-nilai yang diinput ke dalam matriks C
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=P;j++)
        {
            C[i][j] = 0;
        }
    }
    //Melakukan penghitungan untuk mencari C[i][j] dengan mengalikan A[i][k] dengan B[j][k]
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=P;j++)
        {
            for(int k=1;k<=M;k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    //Menampilkan hasil C[i][j] yang sudah dihitung
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=P;j++)
        {
            cout << C[i][j];
            if(j<P)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }   
        }
    }
}