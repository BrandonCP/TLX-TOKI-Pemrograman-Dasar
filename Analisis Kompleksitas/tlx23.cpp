#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    //melakukan iterasi hingga N-1 kali
    for(int i=0;i<N;i++)
    {
        int a;
        cin >> a;
        bool prima = true;

        // jika angka yang dimasukkan adalah 1, maka tidak termasuk bilangan prima
        if(a==1)
        {
            prima = false;
        }
        
        /*pengecek adalah bilangan yang akan selalu bertambah 1 setiap iterasi untuk mengecek
        bilangan tersebut bilangan prima atau bukan*/ 
        int pengecek = 2;
        while(pengecek*pengecek<a)
        {
            // jika habis dibagi oleh pengecek, maka bilangan tersebut bukan bilangan prima
            if(a%pengecek == 0)
            {
                prima = false;
                break;
            }
            pengecek++;
        }
        if(prima)
        {
            cout << "YA";
        }
        else
        {
            cout << "BUKAN";
        }

        cout << endl;
    }
}
