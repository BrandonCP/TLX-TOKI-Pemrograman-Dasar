#include <iostream>
using namespace std;

int N, K, catat[100];

void tulis(int kedalaman)
{
    if(kedalaman>=N){
        for(int i=N-K;i<N;i++){
            cout << catat[i]; //cetak nilai
            if(i<N-1){
                cout << " "; //cetak spasi
            }
        }
        cout << endl;
    } else {
        for(int i=catat[kedalaman-1]+1;i<=N;i++){
                catat[kedalaman] = i;
                tulis(kedalaman+1);
        }
    }
}

int main()
{
    cin >> N >> K;
    tulis(N-K);
}