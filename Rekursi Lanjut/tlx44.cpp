#include <iostream>
using namespace std;

int N, pernah[100], catat[100];
bool zigzag, kondisi1, kondisi2;

void tulis(int kedalaman)
{
    if(kedalaman>=N){
        //zigzag digunakan untuk mengecek apakah nilai tengah lebih besar atau lebih kecil dari nilai kiri kanannya
        zigzag = true;
        for(int i=1;i<N-1;i++){
            kondisi1 = catat[i]>catat[i-1]&&catat[i]>catat[i+1];
            kondisi2 = catat[i]<catat[i-1]&&catat[i]<catat[i+1];
            if(!(kondisi1 || kondisi2)){
                zigzag = false;
            }
        }
        if(zigzag){
            for(int i=0;i<N;i++){   
                cout << catat[i]; //cetak nilai yang telah dibuat zigzag
            }
            cout << endl;
        }
    } else {
        for(int i=1;i<=N;i++){
            if(!pernah[i]){
                pernah[i] = true;
                catat[kedalaman] = i;
                tulis(kedalaman+1);
                pernah[i] = false;
            }
        }
    }
}

int main()
{
    cin >> N;
    tulis(0);
}