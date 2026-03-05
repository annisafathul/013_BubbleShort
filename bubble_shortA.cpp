//add library
#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variabel global array a dengan ukuran 20
int n;       // Deklarasi cariabel global n untuk menyimpan banyak elemen

void input()
{
    // procedur untuk input
    int d;
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
             break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }

    }
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr [i];
    }
}