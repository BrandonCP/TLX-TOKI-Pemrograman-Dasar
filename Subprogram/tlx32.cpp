#include <iostream>
#include <cmath>
using namespace std;

int A , B;

int fungsi(int k, int x)
{
    //nilai dimasukkan ke dalam x karena nilai x akan menjadi nilai fungsi berikutnya
    //misalnya k = 2, maka f(f(x)), jika A = 2, B = 1, x = 2, maka
    // f(f(2)) = f(2*2+1) = f(5) = 2*5+1 = 11
    x = abs(A*x+B);
    if(k==1)
        return x;
    else
        return fungsi(k-1, x);
}

int main()
{
    int K, x;
    cin >> A >> B >> K >> x;
    // cetak hasil fungsi yang telah ditemukan
    cout << fungsi(K, x) << endl;
}