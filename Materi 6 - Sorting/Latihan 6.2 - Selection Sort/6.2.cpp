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

    // Proses Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (data[j] < data[minIndex])
            {
                minIndex = j;
            }
        }

        // Tukar posisi
        int temp = data[i];
        data[i] = data[minIndex];
        data[minIndex] = temp;
    }

    cout << "\nData setelah diurutkan (ascending): ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }

    cout << endl;
    return 0;
}
