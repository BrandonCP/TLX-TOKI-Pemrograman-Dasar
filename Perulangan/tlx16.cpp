#include <iostream>
using namespace std;

int main()
{
    long int N;
    cin >> N;
    while(N>1)
    {
        if(N%2==1) //bilangan ganjil akan menghasilkan N=0
            N=0;
        else
        {
            N = N/2; //bilangan genap akan dibagi terus menerus hingga mencapai bilangan 0/ganjil
        }
    }
    if(N==0)
        cout << "bukan" << endl;
    if(N==1)
        cout << "ya" << endl;
}