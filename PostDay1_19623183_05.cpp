// Program Tugas Post Day Modul 1 Online Learning Nomer 5
// Deskripsi : Mengecek suatu integer sebagai input merupakan sebuah bilangan prima 
// Varel Tiara - 19623183

#include <iostream>
using namespace std;

int main() {
  cout << "Program C++ Angka Prima" << endl;
  cout << "=======================" << endl;
  cout << "\n";
  cout << "Input satu angka bulat : "; int num; cin >> num;
  bool prima;
  if (num <= 1) {
    prima = false;
  }
  else if (num == 2){
    prima = true;
  }
  else {
    prima = true;
    for (int i=2;i<=num-1;i++) {
      if (num % i == 0) {
        prima = false;
        break;
      }
      else {
        prima = true;
      }
    }
  }
  if (prima == true) {
    cout << "\n";
    cout << num << " angka prima" << endl;
  }
  else {
    cout << "\n";
    cout << num << " bukan angka prima" << endl;
  }
  return 0;
}
