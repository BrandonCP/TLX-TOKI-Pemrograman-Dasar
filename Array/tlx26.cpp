#include <iostream>
using namespace std;

int main()
{
    long int arr[100000];
    int N;

    //masukkan nilai N
    cin >> N;
    int count;

    //masukkan nilai ke dalam array
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }

    // k adalah nilai yang akan digunakan untuk menentukan jumlah data tertinggi
    // sedangkan mode adalah nilai akhir ketika seluruh data telah dicari
    int k=1, mode = arr[0];
    for(int i=0;i<N-1;i++)
    {
        if(arr[i]>0)
        {
            count = 1;
            for(int j=i+1;j<N;j++)
            {
                if(arr[i]==arr[j])
                {
                    arr[j] = 0;
                    count += 1;
                }
            }
            if(count>k)
            {
                k = count;
                mode = arr[i];
            }
            else
            {
                if(count==k)
                {
                    if(arr[i]>mode)
                    {
                        k = count;
                        mode = arr[i];
                    }
                }
            }
        }
    }
    cout << mode << endl;
}