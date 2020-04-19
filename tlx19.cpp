#include <iostream>
using namespace std;

int main()
{
    //N adalah jumlah bilangan, sedangkan K adalah angka yang akan diubah menjadi *
    int N, K;
    cin >> N >> K;
    for(int i=1;i<=N;i++)
    {
        //untuk mendapatkan pola, maka kita harus mengganti nilai K menjadi * dengan cara i modulus K = 0
        if(i%K==0)
        {
            cout << "*";
            if(i<N)
                cout << " ";
            else
                cout << endl;
        }
        /*Jika i modulus K tidak sama dengan 0, maka cetak angka.
        Contoh: 11 % 3 != 0, maka cetak angka 11*/
        else
        {
            cout << i;
            if(i<N)
                cout << " ";
            else
                cout << endl;
        }
    }
}