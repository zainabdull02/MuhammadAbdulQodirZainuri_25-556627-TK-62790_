#include <iostream>
#include <cmath>   // untuk sqrt() dan pow()
using namespace std;

int main() {
    float x1, y1, x2, y2, distance;

    cout << "Masukkan koordinat titik pertama (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik kedua (x2 y2): ";
    cin >> x2 >> y2;

    // rumus jarak: d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Jarak antara kedua titik = " << distance << endl;

    return 0;
}