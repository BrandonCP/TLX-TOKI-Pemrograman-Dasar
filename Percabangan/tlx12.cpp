#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << abs(x1-x2) + abs(y1 - y2) << endl; // cari nilai absolut dari |x1-x2| + |y1-y2|
}