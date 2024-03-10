#include <iostream>

using namespace std;

float keliling_lingkaran(float jari) {
    return 3.14 * 2 * jari;
}

float luas_lingkaran(float jari){
    return 3.14 * jari * jari;
}

int main() {
    float r;
    cout << "Masukkan jari - jari : ";
    cin >> r;
    cout << "Keliling : " << keliling_lingkaran(r) << endl;
    cout << "Luas : " << luas_lingkaran(r) << endl;
    return 0;
}