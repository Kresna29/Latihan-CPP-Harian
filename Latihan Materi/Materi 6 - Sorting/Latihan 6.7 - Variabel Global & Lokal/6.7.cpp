#include <iostream>
using namespace std;

int nilaiGlobal = 50; // variabel global

void tampil()
{
    int nilaiLokal = 20;
    cout << "Nilai Lokal = " << nilaiLokal << endl;
    cout << "Nilai Global = " << nilaiGlobal << endl;
}

int main()
{
    cout << "Nilai Global (sebelum): " << nilaiGlobal << endl;
    tampil();

    nilaiGlobal = 100; // ubah nilai global
    cout << "Nilai Global (setelah diubah): " << nilaiGlobal << endl;

    return 0;
}
