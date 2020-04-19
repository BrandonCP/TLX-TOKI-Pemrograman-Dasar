#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    int K, a;
    //Masukkan string S dan nilai K
    cin >> S >> K;

    //temp digunakan untuk menyimpan tempat sementara nilai S[i] yang telah dikurangi dengan a
    //Contoh 'a' - 'a' = 0
    //enkripsi digunakan untuk menambah nilai temp tadi dengan nilai K, lalu dimodulus dengan 26
    //jika melebihi dari 26, maka 27 % 26 = 1, yang mana huruf tersebut akan ulang lagi dari a
    for(int i=0;i<S.length();i++)
    {
        int temp = (S[i] - 'a');
        int enkripsi = (temp+K) % 26;
        S[i] = enkripsi + 'a';
    }
    cout << S << endl;
}