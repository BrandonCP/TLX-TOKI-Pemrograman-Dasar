#include <iostream>
using namespace std;

int pangkat = 1;

//fungsi untuk mencari faktorisasi dari sebuah bilangan
void faktorisasi_prima(int a)
{
    int i=2;
    int b = a;
    /* i adalah angka yang digunakan untuk mencari nilai dari setiap faktorisasi prima dari nilai a
     digunakan nilai b agar nilai a tidak berubah jika mengalami pembagian di dalam fungsi */
    while(i<=b)
    {
        if(a%i==0)
        {
            a = a/i;
            // jika masih dapat dibagi, maka bilangan itu memiliki pangkat
            while(a%i==0)
            {
                pangkat++;
                a = a/i;
            }
            //cetak nilai i yang telah ditemukan. Nilai i adalah faktorisasi bilangan prima
            cout << i;
            //cetak pangkat jika pangkat lebih dari 1
            if(pangkat>1)
            {
                cout << "^" << pangkat;
                pangkat = 1;
            }
            if(a!=1)
            {
                cout << " x ";
            }
            else
            {
                cout << endl;
            }
        }
        i++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    faktorisasi_prima(N);

    return 0;
}