#include <bits/stdc++.h>
using namespace std;

bool visited[25][25];
int T = 0;
int B, K;
int A[25][25];
int M, N;

void jawbreaker(int x, int y, int nilai){
    if(x>=0 && x<=M-1 && y>=0 && y<=N-1){
        if(!visited[x][y]){
            visited[x][y] = true;
            if(A[x][y] == nilai){
                T++;
                jawbreaker(x-1, y, nilai);
                jawbreaker(x+1, y, nilai);
                jawbreaker(x, y+1, nilai);
                jawbreaker(x, y-1, nilai);
            }
        }
    }
}

int main(){
    cin >> M >> N;

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin >> A[i][j];
        }
    }

    cin >> B >> K; //B dan K adalah titik koordinat yang akan diklik
    int value = A[B][K];
    jawbreaker(B, K, value);

    cout << T*(T-1) << "\n";

    return 0;
}