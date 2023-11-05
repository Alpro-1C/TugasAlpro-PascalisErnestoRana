#include <iostream>

using namespace std;

int main(){
      int limit;
    cout << "Masukkan batas: ";
    cin >> limit;

    int sumOdd = 0;
    int sumEven = 0;
    int sumPrime = 0;

    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= limit; i += 2) {
        cout << i << " ";
        sumOdd += i;
    }

    cout << "\nJumlah Bilangan Ganjil: " << sumOdd << endl;
    cout << "Faktor Bilangan Ganjil: 1";
    for (int i = 2; i <= sumOdd; i++) {
        if (sumOdd % i == 0) {
            cout << ", " << i;
        }
    }
    cout << endl;

    cout << "\nBilangan Genap: ";
    for (int i = 2; i <= limit; i += 2) {
        cout << i << " ";
        sumEven += i;
    }

    cout << "\nJumlah Bilangan Genap: " << sumEven << endl;
    cout << "Faktor Bilangan Genap: 1";
    for (int i = 2; i <= sumEven; i++) {
        if (sumEven % i == 0) {
            cout << ", " << i;
        }
    }
    cout << endl;

    cout << "\nBilangan Prima: ";
    for (int i = 2; i <= limit; i++) {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
            sumPrime += i;
        }
    }

    cout << "\nJumlah Bilangan Prima: " << sumPrime << endl;
    cout << "Faktor Bilangan Prima: 1, " << sumPrime << endl;

    return 0;
}
