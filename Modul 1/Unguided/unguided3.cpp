#include <iostream>
#include <map>

using namespace std;

int main()
{
    
    map<int, string> bulan = {
        {1, "Januari"},
        {2, "Februari"},
        {3, "Maret"},
        {4, "April"},
        {5, "Mei"},
        {6, "Juni"},
        {7, "Juli"},
        {8, "Agustus"},
        {9, "September"},
        {10, "Oktober"},
        {11, "November"},
        {12, "Desember"},
    };
    int bulan_num;
    cout << "Masukkan nomor bulan : ";
    cin >> bulan_num;
    if (bulan_num < 1 || bulan_num > 12) {
        cout << "Tidak ada bulan ke-" << bulan_num << endl;
        return 1;
    }
    cout << "Bulan ke - " << bulan_num << " adalah : " << bulan[bulan_num] << endl;
    return 0;
}