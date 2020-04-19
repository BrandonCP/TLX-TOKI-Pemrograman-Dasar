#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if(N<10) { 
        cout <<"satuan\n";
    } else if(N<100) {
        cout <<"puluhan\n";
    } else if(N<1000) {
        cout <<"ratusan\n";
    } else if(N<10000) {
        cout <<"ribuan\n";
    } else {
        cout <<"puluhribuan\n";
    }
}