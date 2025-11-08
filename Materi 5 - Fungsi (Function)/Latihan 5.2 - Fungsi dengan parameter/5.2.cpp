#include <iostream>
using namespace std;

// Fungsi menghitung luas lingkaran dengan parameter jari-jari
void hitungLuasLingkaran(double r)
{
    double luas = 3.14 * r * r;
    cout << "Luas lingkaran dengan jari-jari " << r << " adalah " << luas << endl;
}

int main()
{
    double jari;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari;

    // Memanggil fungsi dengan argumen
    hitungLuasLingkaran(jari);

    return 0;
}
