#include <iostream>

using namespace std;

int main() {

    //Deklarasi
    int pembelian, diskon, syarat = 500000; 

    cout << "\nMasukkan Pembelian Anda : "; 
    cin >> pembelian; 
    cout << endl;

    //Pengkondisian
    if (pembelian >= syarat)    {
        cout << "=> Anda Mendapat Diskon! 10% <=" << endl;
        diskon = 0.1 * pembelian;
        cout << " Diskonnya Sebesar " << diskon << endl;
    } else {
        cout << "Anda Tidak Mendapat Diskon!" << endl;
    }

    //Final Output
    cout << "\n - Total Harga Sebesar : " << pembelian - diskon <<endl;    
    
}
