#include <iostream>
using namespace std;

int main()
{
    int N,a;
    cin >> N;
    for(int a=N;a>=1;a--) //buat a=N, iterasi a =1
    {
        if(N%a==0) //bilangan faktor yang diperoleh dari N modulus a
        {
            cout << a << endl;
        }
    }
}