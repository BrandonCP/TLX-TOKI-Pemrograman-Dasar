#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int m[128][128];
int N;
string jawaban[128*128];

void quadtree_penerjemahan(int r, int c, int k, string s){
    for(int i=1;i<s.length();i++){
        if(s[i]=='0'){
            k = k/2;
        } else if(s[i]=='1'){
            c = c+(k/2);
            k = k/2;
        } else if(s[i]=='2'){
            r = r+(k/2);
            k = k/2;
        } else{
            r = r+(k/2);
            c = c+(k/2);
            k = k/2;
        }
    }

    for(int i=r;i<r+k;i++){
        for(int j=c;j<c+k;j++){
            m[i][j] = 1;
        }
    }
}

int main(){
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> jawaban[i];
    }
    
    int r, c;
    cin >> r >> c;

    int maxRC = max(r, c);
    int pow2 = 1;
    while(pow2 < maxRC){
        pow2 = pow2 * 2;
    }

    for(int i=0;i<pow2;i++){
        for(int j=0;j<pow2;j++){
            m[i][j] = 0;
        }
    }

    for(int i=0;i<N;i++){
        quadtree_penerjemahan(0, 0, pow2, jawaban[i]);
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << m[i][j];
            if(j==c-1){
                cout << "\n";
            } else{
                cout << " ";
            }
        }
    }
    return 0;
}