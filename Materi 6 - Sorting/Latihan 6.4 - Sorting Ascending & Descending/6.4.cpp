#include <iostream>
using namespace std;

int main()
{
    int n, data[100];
    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    // Bubble Sort Ascending
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    cout << "\nData (Ascending): ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";

    // Bubble Sort Descending
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (data[j] < data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    cout << "\nData (Descending): ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";

    cout << endl;
    return 0;
}
