#include <iostream>
using namespace std;

string makanan[4]     = {"1. Sayur Asem\t", "2. Ayam Goreng", "3. Jengkol\t", "4. Sayur Lodeh" };
string minuman[4]     = {"1. Es Jeruk\t ", "2. Es Teh\t", "3. Air Putih\t", "4. Lemon Tea\t"};
string pilihnasi[3]   = {"1. Nasi Putih", "2. Nasi Goreng", "3. Nasi Kuning"};

      void judul(){
      string judul;
      cout << "\t\t\t===============================================" << endl;
      cout << "\t\t\t=============== WARTEG PAK AGUS ===============" << endl;
      cout << "\t\t\t===============================================" << endl;
      cout << endl;
      }

      void pesanan(){
        cout << "Menu Makanan :" << endl;
      for (int i=0; i<4; i++){
        cout << "   " << makanan [i] << endl;
       }
        cout << "Menu Minuman :" << endl;
      for (int a=0; a<4; a++){
        cout << "   " << minuman [a] << endl;
       }
        cout << "Pilih Nasi   :" << endl;
       for (int b=0; b<3; b++){
        cout << "   " << pilihnasi [b] << endl;
       }
        cout << endl;
      }
      void menu(){
      int p , r , q , t = 12000, s = 5000, u = 3000;
        cout << "Pesan Makanan (1-4) : ";
        cin >> p;
        cout << "Pesan Minuman (1-4) : ";
        cin >> r;
        cout << "Pilih Nasi    (1-3) : ";
        cin >> q;
        cout << endl;

      switch (p){
        case 1:
        cout << "Pesanan Makanan Pertama : " << makanan[0] << "    Rp.  " << t;
        break;
        case 2:
        cout << "Pesanan Makanan Kedua   : " << makanan[1] << "    Rp.  " << t;
        break;
        case 3:
        cout << "Pesanan Makanan Ketiga  : " << makanan[2] << "    Rp.  " << t;
        break;
        case 4:
        cout << "Pesanan Makanan Keempat : " << makanan[3] << "    Rp.  " << t;
        break;
      }
        cout << endl;

        switch(r){
        case 1:
        cout << "Pesanan Minuman Pertama : " << minuman[0] << "    Rp.  " << s;
        break;
        case 2:
        cout << "Pesanan Minuman Kedua   : " << minuman[1] << "    Rp.  " << s;
        break;
        case 3:
        cout << "Pesanan Minuman Ketiga  : " << minuman[2] << "    Rp.  " << s;
        break;
        case 4:
        cout << "Pesanan Minuman Keempat : " << minuman[3] << "    Rp.  " << s;
        break;
      }
        cout << endl;

        switch(q){
        case 1:
        cout << "Pilih Nasi Pertama      : " << pilihnasi[0] << "   Rp.  " << u;
        break;
        case 2:
        cout << "Pilih Nasi Kedua        : " << pilihnasi[1] << "   Rp.  " << u;
        break;
        case 3:
        cout << "Pilih Nasi Ketiga       : " << pilihnasi[2] << "   Rp.  " << u;
        break;
        }
        cout << endl;

        cout << "_______________________________________" << endl;
        cout << "Total Makan dan Minum = Rp." << t + s + u << endl;

      }
      int main (){
        char pilih;

        system("CLS");

      do{
        judul();
        pesanan();
        menu();
        cout << endl;
        cout << "Apakah Anda Ingin Pesan Lagi? (y/t) : ";
        cin >> pilih;
      }
      while (pilih == 'y' || pilih == 'Y');

        cout << "==========================================================================================" << endl;
        cout << "===================TERIMAKASIH TELAH MAMPIR DAN SILAHKAN DATANG KEMBALI===================" << endl;
        cout << "==========================================================================================" << endl;
      }
