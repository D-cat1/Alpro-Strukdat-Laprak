#include <iostream>

using namespace std;

int main() {
    int length;
    cout << "Masukkan Panjang Arr : ";
    cin >> length;
    double data_angka[length], avg = 0;
    for (int i = 0; i< length; i++) {
        cout << "Masukkan data ke - " << i << " : ";
        cin >> data_angka[i];
    }

    double min = data_angka[0];
    double max = data_angka[0];
    for (int i = 0; i< length; i++) {
        if (data_angka[i] < min) {
            min = data_angka[i];
        }
        
        if (data_angka[i] > max) {
            max = data_angka[i];
        }
        avg += data_angka[i];
    }

    cout << "Minimum : " << min << endl;
    cout << "Maximum : " << max << endl;
    cout << "Average : " << avg/length << endl;


    return 0;
}