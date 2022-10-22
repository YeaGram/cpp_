#include <iostream>

using namespace std;

int main() {

    //Deklarasi
    int bilangan, output; 

    cout << "\nMasukkan Bilangan Anda : ";
    cin >> bilangan;

    //pengkondisian
    if (bilangan < 0)   {
        output = bilangan - (bilangan * 2);
        // atau output = -bilangan;
    } else {
        output = bilangan;
    }
    
    //final output
    cout << "Nilai Mutlaknya Adalah : " << output;
    cout << endl;    
    
}
