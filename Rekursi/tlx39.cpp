#include <iostream>
using namespace std;

int faktorial_ganjil_genap(int N)
{
    if(N==1) {
        return 1;
    } else if(N%2==0){
        return (N/2)*faktorial_ganjil_genap(N-1);
    } else {
        return N*faktorial_ganjil_genap(N-1);
    }
}

int main()
{
    int N;
    cin >> N;
    cout << faktorial_ganjil_genap(N) << endl;
}
