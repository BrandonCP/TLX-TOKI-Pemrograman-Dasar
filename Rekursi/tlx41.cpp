#include <iostream>
using namespace std;

// string str;
// int len = str.length();
// int a = 0;
// int b = len-1;

// bool palindrom(string str, int a, int b)
// {
//     if(a>=b)
//         return true;
//     if(str[a]!=str[b])
//         return false;
//     return palindrom(str, ++a, --b);
// }

bool palindrom(string str)
{
    int len = str.length();
    string sub = str.substr(1, len-2);
    //Jika panjang string kurang dari 2, maka kembalikan benar
    if(len<2) {
        return true;
    }
    //Jika panjang string = 2, cek apakah string[0] dan string[1] sama
    if(len==2){
        if(str[0]==str[1])
            return true;
        else
            return false;
    }
    //Jika karakter pertama dan karakter terakhir beda, maka kembalikan salah
    if(str[0] != str[len-1]){
        return false;
    }
    return (str[0]=str[len-1])&&palindrom(sub);
}

int main()
{
    string S;
    cin >> S;
    if(palindrom(S)) {
        cout << "YA" << endl;
    } else{
        cout << "BUKAN" << endl;
    }
}