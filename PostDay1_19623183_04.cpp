// Program Tugas Post Day Modul 1 Online Learning Nomer 4
// Deskripsi :  Mengeluarkan apakah suatu tahun kabisat atau tidak
// Varel Tiara - 19623183

#include <iostream>
using namespace std;

int main() {
  cout << "Tentukan tahun kabisat" << endl;
  int year; cout << "Tahun : "; cin >> year;
  if ((year % 400 != 0 && year % 100 == 0) || (year % 400 != 0 && (year % 100 != 0 && year % 4 != 0))) {
    cout << "bukan kabisat" << endl;
  }
  else {
    cout << "kabisat" << endl;
  }
  return 0;
}
