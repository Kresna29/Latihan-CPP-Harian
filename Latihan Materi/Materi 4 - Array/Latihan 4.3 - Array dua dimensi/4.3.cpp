#include <iostream>
using namespace std;

int main()
{
    int matriks[2][3]; // 2 baris, 3 kolom

    cout << "Masukkan elemen matriks 2x3:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    cout << "\nIsi Matriks:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
