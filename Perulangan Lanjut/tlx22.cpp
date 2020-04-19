#include <iostream>
using namespace std;
int main()
{
    int N;
    int k=0;
    cin >> N;
    //iterasi hingga i < N, contoh jika N = 5, maka i diiterasi hingga 5 kali (karena dimulai dari 0)
    for(int i=0;i<N;i++) 
    {
        for(int j=0;j<=i;j++)
        {
            cout << k;
            k++;
            if(k==10)
            {
                k=0;
            }
        }

        cout << endl;
    }
}