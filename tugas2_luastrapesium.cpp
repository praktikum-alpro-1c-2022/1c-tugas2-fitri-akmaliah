#include <iostream>
using namespace std;

int main () {
    //Luas Persegi trapesium
    int atas,bawah,tinggi,luas,trapesium;

    cout << "menghitung luas trapesium 1/2 x (a + b) x t" << endl;
    cout << "masukkan atas : ";
    cin >> atas;

    cout << "masukkan bawah : ";
    cin >> bawah;

    cout << "masukkan tinggi : ";
    cin >> tinggi;

    double luastrapesium = 0.5 * ( atas + bawah ) * tinggi;
    cout << "hasil :" << endl;
    cout << "luas trapesium = " << luastrapesium << endl;



return 0;

}

