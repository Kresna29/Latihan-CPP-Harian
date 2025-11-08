#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // Input dua bilangan
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    // Operator aritmatika
    cout << "\n=== Operator Aritmatika ===" << endl;
    cout << "Penjumlahan  : " << a + b << endl;
    cout << "Pengurangan  : " << a - b << endl;
    cout << "Perkalian    : " << a * b << endl;
    cout << "Pembagian    : " << a / b << endl;
    cout << "Sisa bagi    : " << a % b << endl;

    // Operator logika/perbandingan (hasil: 1 = true, 0 = false)
    cout << "\n=== Operator Logika ===" << endl;
    cout << "(a == b) : " << (a == b) << endl;
    cout << "(a != b) : " << (a != b) << endl;
    cout << "(a > b)  : " << (a > b) << endl;
    cout << "(a < b)  : " << (a < b) << endl;

    return 0;
}
