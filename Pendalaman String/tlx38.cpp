#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    string T = "_";
    cin >> S;
    //Jika penulisan tersebut gaya camel case, ubah ke snake case
    if(S.find("_")==-1)
    {
        for(int i=0;i<S.length();i++)
        {
            if(S[i]<'a')
            {
                S[i] += 32;
                S.insert(i, "_");
            }
        }
        cout << S << endl;
        return 0;
    }
    //Jika penulisan tersebut gaya snake case, ubah ke camel case
    if(S.find("_")!=0)
    {
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='_')
            {
                S.erase(i, 1);
                S[i] -= 32;
            }
        }
        cout << S << endl;
    }
}