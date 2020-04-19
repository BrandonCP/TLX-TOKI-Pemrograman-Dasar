#include <iostream>
using namespace std;

/* Fungsi yang digunakan untuk membalikkan sebuah nilai menggunakan trik modulus dan menyimpan 
di tempat sementara dalam ret */
int reverse(int x)
{
    int temp = x;
    int ret = 0;

    while(temp > 0)
    {
        ret = (ret*10) + (temp%10);
        temp = temp / 10;
    }
    return ret;
}

int main()
{
    int A, B;
    cin >> A >> B;
    // gunakan fungsi reverse untuk membalikkan masing-masing nilai A dan B
    A = reverse(A);
    B = reverse(B);
    //cetak hasil A+B kemudian reverse kembali hasil yang telah dijumlah
    cout << reverse(A+B) << endl;
}