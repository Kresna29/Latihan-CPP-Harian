#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n)
{
    if (n == 0 || n == 1)
        return 1;               // basis rekursi
    else
        return n * faktorial(n - 1);  // pemanggilan diri sendiri
}

int main()
{
    int angka;

    cout << "Masukkan bilangan: ";
    cin >> angka;

    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;

    return 0;
}
