#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    //iterasi hingga ke ke N kali
    for(int i=0;i<N;i++)
    {
        int a;
        cin >> a;
        bool prime = true;
        int pengecek = 1;
        int bilangan_positif = 0;

        // a/2 karena bilangan faktor tidak perlu mengecek hingga ke-N-1
        /* Contoh N = 100, maka faktornya
        1 X 100     10 X 5     
        2 X 50      25 X 4
        4 X 25      50 X 2
        5 X 10      100 X 1
        dan sisanya akan melakukan perulangan yang sama*/
        int b=a/2;
        while(pengecek<b)
        {
            if(a%pengecek == 0)
            {
                b = a/pengecek;
                prime = false;
                bilangan_positif++;
                if(bilangan_positif<=2)
                {
                    prime = true;
                }
            }
            pengecek++;
        }
        
        if(prime)
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