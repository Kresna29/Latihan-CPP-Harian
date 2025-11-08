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

    // Proses Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }

    cout << "\nData setelah diurutkan (ascending): ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }

    cout << endl;
    return 0;
}
