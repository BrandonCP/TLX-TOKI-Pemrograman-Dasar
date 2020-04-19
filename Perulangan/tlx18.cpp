#include <iostream>
using namespace std;

int main()
{
    //A adalah bilangan terbesar, maka A diset bilangan terkecil
    //sedangkan B adalah bilangan terkecil, maka B diset bilangan terbesar
    int N, temp=0, A=-100000, B=100000; 
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> temp;
        if(A<temp)
        {
            A = temp;
        }
        if(B>temp)
        {
            B = temp;
        }
    }
    cout << A << " " << B << endl;
}