#include <iostream>
using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    // Menentukan status lulus atau tidak dengan operator ternary
    string status = (nilai >= 60) ? "Lulus" : "Tidak Lulus";

    cout << "Status: " << status << endl;

    return 0;
}
