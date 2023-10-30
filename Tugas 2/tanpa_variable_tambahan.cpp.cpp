#include <iostream>
using namespace std;

int main(){
    int firstValue = 10;
    int secondValue = 8;

    // Tukar Value Kedua Variable Tanpa Temp (variable tambahan)
     firstValue = firstValue + secondValue;
     secondValue = firstValue - secondValue;
     firstValue = firstValue - secondValue;

     // Output Penukaran kedua variable tanpa temp
      cout << "firstValue: " << firstValue << endl;
      cout << "secondValue: " << secondValue << endl;

    return 0;
}
