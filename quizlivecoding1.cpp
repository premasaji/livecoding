#include <iostream>
using namespace std;

void hitungEK(double massabenda, double massasepeda, double kecepatan) {
    double ek = 0.5 * (massabenda + massasepeda) * kecepatan * kecepatan;
    cout << "Energi Kinetik : " << ek << " Joule";
}

int main() {
    double massabenda, massasepeda, kecepatan;

    cout << "Massa Benda (kg): ";
    cin >> massabenda;
    cout << "Massa Sepeda (kg): ";
    cin >> massasepeda;
    cout << "Kecepatan (m/s): ";
    cin >> kecepatan;

    hitungEK(massabenda, massasepeda, kecepatan);
}