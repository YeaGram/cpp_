#include <iostream>

using namespace std;

int main() {

    //Deklarasi
    bool x = true;
    float angka1, angka2, hasil;
    string operan;

    cout << "\nValid Format => [x + y]|[x - y]|[x / y]|[x * y]" << endl;
    cout << "Pisahkan Angka dan Operator Menggunakan Spasi" << endl;
    cout << "Masukkan Format : ";
    cin >> angka1 >> operan >> angka2;
    
    // Pengkondisian
    if(operan == "-") {
        hasil = angka1 - angka2;
    } else  if(operan == "+") {
        hasil = angka1 + angka2;
    } else if(operan == "/") {
        hasil = angka1 / angka2;
    } else  if(operan == "*") {
        hasil = angka1 * angka2;
    } else {
        x = false;
    }

    // Pengkondisian jika semua input benar
    if(x) {
        cout << "Hasil dari :" << angka1 << operan << angka2 << " = " << hasil << endl;
    } else {
        cout << "Operator tidak valid atau anda mengopersikan bukan angka!" << endl;
    }
    
}
