#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float N, F, C;
    cin >> N;
    F = trunc(N); // Jika N = 3.4, maka F = 3, jika N = 3.6, maka F = 3, jika N = 3, maka F = 3
    C = trunc(N)+1; // Jika N = 3.4, maka C = 4, jika N = 3.6, maka C = 4, jika N = 3, maka C = 3

    // Program for searching floor and ceil numbers than are greater than or equal to 0 value
    if(N>=0) {
        if(trunc(N) != N) {
            cout << F << " " << C << endl;
        } else {
            cout << F << " " << F << endl;
        }
    }

    // Program for searching floor and ceil numbers that are smaller than 0 value
    if(N<0) {
        if(trunc(N) != N) {
            cout << F-1 << " " << C-1 << endl;
        } else {
            cout << F << " " << F << endl;
        }
    }
}