#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i=1;i<=N;i++)
    {
        if(i%10==0)
        {
            continue;
        }
        if(i==42)
        {
            cout <<"ERROR\n";
            break;
        }
        cout << i << endl;
    }
}
