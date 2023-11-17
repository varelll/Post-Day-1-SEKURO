// Program Tugas Post Day Modul 1 Online Learning Nomer 1
// Deskripsi :  Mengeluarkan semua bilangan genap yang berada pada rentang a dan b inklusif (a dan/atau b termasuk jika genap).
// Varel Tiara - 19623183

#include <iostream>
using namespace std;

int main() {
  int x, y; cin >> x >> y;
  for (int i=x;i<=y;i++){
    if (i%2==0){
      cout << i; cout << " ";
    }
  }
  return 0;
}