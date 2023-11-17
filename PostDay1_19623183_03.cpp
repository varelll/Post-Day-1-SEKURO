// Program Tugas Post Day Modul 1 Online Learning Nomer 3
// Deskripsi :  Membuat pattern segitiga berdasarkan input N
// Varel Tiara - 19623183

#include <iostream>
using namespace std;

int main() {
  int n; cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
        cout<<"*";
      }
      cout<<"\n";
    }
  for(int i=n-1;i>=1;i--){
    for(int j=0;j<i;j++){
        cout<<"*";
      }
      cout<<"\n";
    }
  return 0;
}

