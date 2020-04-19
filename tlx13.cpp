#include <iostream>
using namespace std;

int main() {
    int N, B, jumlah = 0;
    cin >> N;
    for(int i=0;i<N;i++) //iterasi hingga 5 kali
    {
        cin >> B; //masukkan nilai B1 hingga B5
        jumlah = jumlah + B;
    }
    cout << jumlah << endl;
}