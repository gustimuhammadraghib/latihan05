#include <iostream>
using namespace std;

int main () {
 float berat;
 int tinggi;
 cout << "Masukkan tinggi badan (cm): ";
 cin >> tinggi;
 cout << "Masukkan berat badan (kg) : ";
 cin >> berat;
  if (berat<tinggi/2.5) {
  cout << "Hasil : Kurus " << endl;
 }
}
