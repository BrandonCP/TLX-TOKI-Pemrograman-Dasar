#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    for(int i=0;i<S.length();i++)
    {
        //Huruf kapital diubah menjadi huruf kecil
        if(S[i]<'a')
        {
            S[i] += 32;
        }
        
        //Huruf kecil diubah menjadi huruf kapital
        else
        {
            S[i] -= 32;
        }
    }
    cout << S << endl;
}