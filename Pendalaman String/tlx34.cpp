#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    string S;
    string T;
    //Masukkan string S dan string T
    cin >> S >> T;
    
    //Saat mencari kesamaan pada string S dan string T, dan lebih kecil dari panjang S
    while(S.find(T)<S.length())
    {
        //Lakukan penghapusan pada string
        S.erase(S.find(T), T.length());
    }
    cout << S << endl;
}
