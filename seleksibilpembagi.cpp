#include <iostream>

using namespace std;

int main() {

    //Deklarasi
   int pembagi,bilangan;

   cout << "\nMasukkan Pembagi : ";
   cin >> pembagi;

    // Pengkondisian
    if(pembagi != 0) {        
        // FinalOutput
        cout << "Masukkan Bilangan Yang Dibagi : ";
        cin >> bilangan;
        cout << "Hasil Bagi Dari '" <<bilangan<< ":" << pembagi << "' adalah = " << bilangan / pembagi << endl;

    } else {
         // FinalOutput
        cout << "Pembagi Tidak Boleh Angka 0" << endl;
    }
    
}
