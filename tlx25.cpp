#include <iostream>
using namespace std;

int main()
{
    int N=0, arr[100000];
    //menginput nilai arr[N] dengan N adalah jumlah yang tidak diketahui berapa jumlahnya
    while(cin >> arr[N])
    {
        N++;
    }
    
    //mencetak array yang sudah diinput di atas
    for(int i=N-1;i>=0;i--)
    {
        cout << arr[i] << endl;
    }
}