#include <iostream>
using namespace std;

int main()
{
    int data[5] = {12, 7, 9, 21, 5};
    int total = 0, max = data[0], min = data[0];

    // Menghitung total, nilai maksimum, dan minimum
    for (int i = 0; i < 5; i++)
    {
        total += data[i];
        if (data[i] > max) max = data[i];
        if (data[i] < min) min = data[i];
    }

    float rata = (float) total / 5;

    cout << "Total: " << total << endl;
    cout << "Rata-rata: " << rata << endl;
    cout << "Nilai tertinggi: " << max << endl;
    cout << "Nilai terendah: " << min << endl;

    return 0;
}
