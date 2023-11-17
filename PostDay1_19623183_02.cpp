// Program Tugas Post Day Modul 1 Online Learning Nomer 2
// Deskripsi : Mengeluarkan rata-rata dari N buah input user
// Varel Tiara - 19623183

#include <iostream>
using namespace std;

int main() {
  int n; float total; cout << "jumlah bilangan : "; cin >> n;
  for (int i=1;i<=n;i++) {
    cout << "bilangan " << i << ": ";
    float input;
    cin >> input;
    total += input;
  }
  total /= n;
  cout << "RATA-RATA : " << total << endl;
  return 0;
}