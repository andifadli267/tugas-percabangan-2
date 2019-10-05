#include<iostream>
#include<string>
using namespace std;
int main(){
    int belanja, total_harga, status, batas_diskon = 1102019;
    string ktp;
    cout<<"Total belanja anda : ";
    cin>>belanja;
    cout<<"Masukkan asal berdasarkan KTP : ";
    cin>>ktp;
    cout<<"Status"<<endl;
    cout<<"1.Menikah dan memiliki anak"<<endl;
    cout<<"2.Menikah dan belum memiliki anak"<<endl;
    cout<<"3.Belum Menikah tetapi memiliki kartu keanggotaan"<<endl;
    cout<<"4.Menikah tetapi tidak memiliki kartu keanggotaan"<<endl;
    cout<<"Silahkan masukkan status Anda : ";
    cin>>status;
    if(belanja>=batas_diskon){
        if(ktp != "makassar"){
        cout<<"Anda mendapatkan tambahan diskon sebesar 10%"<<endl;
            if(status == 1){
                cout<<"Anda mendapatkan diskon 75% + 10%"<<endl;
                total_harga = belanja - (belanja *0.85);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;

            }
            else if(status == 2){
                cout<<"Anda mendapatkan diskon 50% + 10%"<<endl;
                total_harga = belanja - (belanja*0.6);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
            else if(status == 3){
                cout<<"Anda mendapatkan diskon 25% + 10%"<<endl;
                total_harga = belanja - (belanja*0.35);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
            else if(status == 4){
                cout<<"Anda mendapatkan diskon 10% + 10%"<<endl;
                total_harga = belanja - (belanja*0.2);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
        }
        else{
            if(status == 1){
                cout<<"Anda mendapatkan diskon 75%"<<endl;
                total_harga = belanja - (belanja *0.75);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
            else if(status == 2){
                cout<<"Anda mendapatkan diskon 50%"<<endl;
                total_harga = belanja - (belanja*0.5);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
            else if(status == 3){
                cout<<"Anda mendapatkan diskon 25%"<<endl;
                total_harga = belanja - (belanja*0.25);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
            else if(status == 4){
                cout<<"Anda mendapatkan diskon 10%"<<endl;
                total_harga = belanja - (belanja*0.1);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
        }
    }
    else{
        cout<<"Jumlah yang harus dibayarkan : "<<belanja<<endl;
    }
    return 0;
}
