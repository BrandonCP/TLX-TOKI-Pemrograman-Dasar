#include <iostream>
#include <string>
using namespace std;

void procedure_draw(int n)
{   
    if(n>0)
    {
        procedure_draw(n-1);
        for(int i=1;i<=n;i++) {
            cout << "*";
        }
        cout << endl;
        procedure_draw(n-1);
    }
}

int main()
{
    int N;
    cin >> N;
    procedure_draw(N);
}
