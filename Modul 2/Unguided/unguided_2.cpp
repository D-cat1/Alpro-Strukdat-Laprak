#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Masukkan dimensi eg : 1 2 3 : ";
    cin >> x >> y >> z;
    int data_arr[x][y][z];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << "Masukkan elemen ke [" << i << "][" << j << "][" << k << "] : ";
                cin >> data_arr[i][j][k];
            }
        }

        cout << endl;
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << "Data Array[" << i << "][" << j << "][" << k << "] = " << data_arr[i][j][k] << endl;
            }
        }
    }
    cout << endl;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << data_arr[i][j][k] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}