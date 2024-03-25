#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    string genap = "" , ganjil = "", data = "" ;
    for (int i = 0; i < 10; i++)
    {
        cout << "angka ke - " << i + 1 << " : ";
        cin >> arr[i];
    }
   
    for (int i = 0; i < 10; i++)
    {
        data += to_string(arr[i]) + " ";
        if (arr[i] % 2 == 0) {
            genap += to_string(arr[i]) + " ";
        } else {
            ganjil += to_string(arr[i])+ " ";
        }
    }
    cout << "Data : " << data << endl;
    cout << "Genap : " << genap << endl;
    cout << "Ganjil : " << ganjil << endl;
    return 0;
}