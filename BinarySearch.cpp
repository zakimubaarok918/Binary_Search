#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

int main() {
    return 0;
}

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;
        if (nPanjang <= 10) break;
        cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10.\n";
    }
    for (int i = 0; i < nPanjang; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> element[i];
    }
}

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
    } while (pass++ < nPanjang - 1);
}

