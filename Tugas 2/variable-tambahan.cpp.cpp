#include <iostream>
using namespace std;

int main() {
    int firstValue = 10;
    int secondValue = 8;

    // Tambah nilai kedua variable menggunakan temp (variable tambahan)
    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    // Output Penukaran kedua varable dengan temp (variable tambahan)
    cout << "First value: " << firstValue << endl;
    cout << "Second value: " << secondValue << endl;

    return 0;
}
