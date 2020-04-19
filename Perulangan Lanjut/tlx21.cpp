#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    //iterasi hingga i = N
    for(int i=0;i<N;i++) 
    {
        // iterasi hingga j>i, yang mana i akan selalu bertambah
        for(int j=N-1;j>i;j--) 
        {
            cout << " ";
        }
        // karena jumlah * yang akan dicetak setara dengan jumlah i, maka k<=i
        // Contoh, baris 1 jumlah bintangnya 1. Baris 2 jumlah bintangnya 2
        for(int k=0;k<=i;k++) 
        {
            cout << "*";
        }

        cout << endl;
    }
}