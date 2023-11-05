#include <iostream>
using namespace std;

int main(){
    cout << "Membuat Deret Bilangan Fibonacci" << endl;
    int bilangan1, bilangan2, bilanganBerikutnya, suku, i;

    bilangan1 = 0;
    bilangan2 = 1;

    cout << "Masukkan jumlah suku: ";
    cin  >> suku;

    cout << bilangan1 << bilangan2 << " ";

    // Selanjutnya Buat perulangan mulai dari 3 karena bilangan1 dan bilangan2 sudah dicetak.
    for (i = 3; i <= suku; i++) {
        bilanganBerikutnya = bilangan1 + bilangan2;
        bilangan1 = bilangan2;
        bilangan2 =  bilanganBerikutnya;
        cout  << bilanganBerikutnya << " ";
    }
    return 0;
}

