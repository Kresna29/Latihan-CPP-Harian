#include <iostream>
using namespace std;

int main()
{
    int angka;

    cout << "Masukkan sebuah bilangan: ";
    cin >> angka;

    // Mengecek apakah bilangan ganjil atau genap
    if (angka % 2 == 0)
    {
        cout << angka << " adalah bilangan genap." << endl;
    }
    else
    {
        cout << angka << " adalah bilangan ganjil." << endl;
    }

    return 0;
}