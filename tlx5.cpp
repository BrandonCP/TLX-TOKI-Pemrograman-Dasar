#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float A, T; // declare two variables of float
    cin >> A >> T; // input float A and then input float B
    cout << setprecision(2) << fixed << A*T/2 << endl; //setprecision after decimal 2 numbers, and then output the result of A times T divided by 2
}