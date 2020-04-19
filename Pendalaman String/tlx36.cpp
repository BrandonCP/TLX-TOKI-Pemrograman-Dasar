#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S1, S2, S3, S4;
    cin >> S1 >> S2 >> S3 >> S4;
    //temukan S2 di dalam S1, kemudian hapus karakter S2 yang ada di S1 sepanjang S2
    S1.erase(S1.find(S2), S2.length());
    //masukkan S3 ke dalam S1 lalu ditambah panjang S3(karena saat ditemukan, angka yang ditemukan adalah huruf awal S3)
    S1.insert(S1.find(S3)+S3.length(), S4);
    cout << S1 << endl;
}