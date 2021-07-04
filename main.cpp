#include <iostream>
#include <string>
using namespace std;


string mahasiswa(){ //FUNGSI || METHOD
   cout <<  "Anggun" << "20.12" << endl;
   cout << "Firman David Saputra" << "20.12.1783";

}

int main (){
 
  int diskon,i,j, x, total; // Int tipedata || Diskon DKK Variabel
  int bayar[10], hrga[10],jbrg[10], totali=0; // ARRAY
  char nama[30][x];
  
  cout<<"==============================="<<endl;
  cout<<"======== Program Kasir ========"<<endl;
  cout<<"==============================="<<endl;
  cout<<endl;
  cout<< "Masukkan Jumlah Data = ";
  cin>>x; // INPUT
  cout << endl; // OUTPUT

 for(i=0;i<x;i++){ //Pengulangam
  cout<<"==============================="<<endl;
  cout<<endl;
  cout<< "Masukkan Nama Barang = ";
  cin>>nama[i];
  cout<< "Masukkan Harga Barang = Rp.";
  cin>>hrga[i];
  cout<< "Mclasukkan Jumlah Barang = ";
  cin>>jbrg[i];
  cout<<endl;
 }

system("cls");
    for(i=0;i<x;i++){ 
        cout<<"Nama Barang = "<<nama[i]<<endl;
        cout<<"Harga Barang = Rp. "<<hrga[i]<<endl;
        cout<<"Jumlah Barang = "<<jbrg[i]<<endl;
        bayar[i]=hrga[i]*jbrg[i];
        cout<<"jumlah Belanja = "<<bayar[i]<<endl;
        cout<<endl;
    }

    for(i=0; i<x; i++){
        totali=totali+bayar[i];
        cout<<"Sub total = "<<totali<<endl;
        } 
            if (totali>30000){ //PERCABANGAN
                diskon=0.1*totali;
                cout<<"Diskon 10% = Rp. "<<diskon<<endl;
                total=totali-diskon;
                cout<<"Total  = Rp. "<<total<<endl;
         }
    mahasiswa();

}