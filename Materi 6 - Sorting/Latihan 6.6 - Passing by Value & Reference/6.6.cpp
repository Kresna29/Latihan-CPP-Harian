#include <iostream>
using namespace std;

void ubahDataByValue(int a)
{
    a = 999; // hanya mengubah salinan
}

void ubahDataByReference(int &a)
{
    a = 999; // mengubah nilai asli
}

int main()
{
    int x = 10, y = 10;

    ubahDataByValue(x);
    ubahDataByReference(y);

    cout << "Setelah ubahDataByValue, x = " << x << endl;
    cout << "Setelah ubahDataByReference, y = " << y << endl;

    return 0;
}
