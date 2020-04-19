#include <iostream>
#include <cmath>
using namespace std;

int A, B;
int komposisi_fungsi(int x, int k)
{
    if(k==0){
        return x;
    } else {
        return abs(A*komposisi_fungsi(x, k-1)+B);
    }
}

int main()
{
    int K, X;
    cin >> A >> B >> K >> X;
    cout << komposisi_fungsi(X, K) << endl;
}