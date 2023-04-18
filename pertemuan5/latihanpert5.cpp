#include<iostream>
using namespace std;

main()
{
    char cKode;

    cout<<"Input Kode Jurusan [A/B] : ";
    cin>>cKode;

    switch(cKode)
    {
        case "A" :
        case "a" :
            cout<<"\nTeknik Informatika";
            break;
        case "B" :
        case "b" :
            cout<<"\nSistem Informatika"
            break;
        default:
            cout<<"\nAnda Salah Memasukan kode";
            break;
    }
}