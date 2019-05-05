#include <iostream>
#include <math.h>
using namespace::std;

string nama,member,cari,namabarang;
string no[5]={"A001","A002","A003","A007","A008"};
string nm[5]={"bayu","irvan","susiati","diana","roni"};
int nomeridentitas,ketemu,a[20],temp,jum,harga,jumlah,total,diskon,jumlahbarang,totalsemuanya;


main ()
{
    cout<<"-------- Selamat Datang ----------";
    cout<<"\nApakah anda member? = ";
    cin>>member;
    if (member=="iya")
    {
       cout<<"Selamat anda mendapat diskon 5%\n";
       cout<<"\nNomor idenditas anda = ";
       cin>>cari;
       for (int i=0;i<5;i++)
       {
           if (cari==no[i])
            nama=nm[i];
       }
       cout<<"Anda member\n";
       cout<<"\nNomer identitas = "<<cari;
       cout<<"\nNama = "<<nama;
    }
    if (member=="tidak")
    {
        cout<<"\nAnda bukan member";
        cout<<"\nSilahkan isi nama anda = ";
        cin>>nama;
    }

    cout<<"\nMasukkan jumlah barang yang ingin anda beli = ";
    cin>>jum;
    for (int q=0;q<jum;q++)
    {
        cout<<"\nBarang ke - "<<q+1;
        cout<<"\nNama Barang    = ";
        cin>>namabarang;
        cout<<"\nHarga satuannya adalah = ";
        cin>>harga;
        cout<<"\nJumlah barang  = ";
        cin>>jumlahbarang;
        jumlah=harga*jumlahbarang;
        total=total+jumlah;
    }





    cout<<"\nTotal semuanya     =Rp. "<<total;
    diskon=total*0.05;
    totalsemuanya=total-diskon;
    cout<<"\nDiskonnya adalah   =Rp. "<<diskon;
    cout<<"\nTotal Semuanya     =Rp. "<<totalsemuanya<<endl;

}
