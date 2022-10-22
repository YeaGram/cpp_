#include <iostream>

using namespace std;

int main() {

    //Deklarasi
   char karakter;
   string output;

   cout << "\nMasukkan Karakter : ";
   cin >> karakter;

    // Pengkondisian
    if(karakter >= '0' && karakter <='9'){
        output = "Angka!";
    } else if(karakter >= 'a' && karakter <='z' || karakter >= 'A' && karakter <='Z'){
        output = "Huruf!";
    } else {
        output = "Symbol!";
    }
    
    // FinalOutput
    cout << "Anda Memasukkan " << output <<endl;
}
