#include <iostream>

using namespace std;

struct Baju
{
    int stok;
    string merk;
    char quality;
};


int main() {

    Baju bajuA;
    bajuA.merk = "Nevada";
    bajuA.stok = 999;
    bajuA.quality = 'A';

    cout << "Merk : " << bajuA.merk << endl;
    cout << "Stok : " << bajuA.stok << endl;
    cout << "Quality : " << bajuA.quality << endl;
    return 0;
}