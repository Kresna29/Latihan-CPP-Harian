#include <iostream>
using namespace std;

int main()
{
    double panjang, lebar, luas, keliling;    // Deklarasi variabel bertipe double

    // Input nilai dari pengguna
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    // Proses perhitungan
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    // Output hasil
    cout << "\nLuas persegi panjang   : " << luas;
    cout << "\nKeliling persegi panjang : " << keliling << endl;

    return 0;
}
