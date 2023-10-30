#include  <iostream>

using namespace std;

int main() {
    int N, M;

    cout  << "Ekor Bebek Pak Tatang ";
    cin >> N;

    cout << "Dibagi ke temannya: ";
    cin >> M;


    int  jumlah_bebek_yang_diberikan = N / M;
    int sisa_bebek = N % M;

    cout << "Jumlah bebek yang harus dia berikan ke masing-masing teman: " << jumlah_bebek_yang_diberikan << endl;
    cout  <<  "Jumlah sisanya: " << sisa_bebek  << endl;

    return 0;
  }
