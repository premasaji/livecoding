#include <iostream>

using namespace std;

void main() {
    double beratApel, beratJeruk, beratSemangka;
    const double hargaApelperKg = 24000;
    const double hargaJerukperKg = 16250;
    const double hargaSemangkaperKg = 8000;

    cout << "Masukkan berat apel (kg): ";
    cin >> beratApel;
    cout << "Masukkan berat jeruk (kg): ";
    cin >> beratJeruk;
    cout << "Masukkan berat semangka (kg): ";
    cin >> beratSemangka;

    double totalBerat = beratApel + beratJeruk + beratSemangka;
    double totalHarga = (beratApel * hargaApelperKg) + (beratJeruk * hargaJerukperKg) + (beratSemangka * hargaSemangkaperKg);
    double diskon = 0;
    if (totalBerat > 10) {
        diskon = 0.05;
    }
    else if (totalBerat > 8) {
        diskon = 0.02;
    }
    double totalHargasetelahDiskon = totalHarga * (1 - diskon);
    cout << "Total yang harus dibayar : Rp " << totalHargasetelahDiskon << "\n";
}