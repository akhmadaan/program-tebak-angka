#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    system("color e");
    int angka, tebak, n=0;

    srand (time(NULL));
    angka=rand() % 100 +1;
    cout<< "Saya Memikirkan Sebuah Angka 1-100. Mulailah menebak!\n";

    do
{
    n++;
    cin>>tebak;
    if (tebak < angka) cout<<"Angka anda terlalu KECIL.\n";
    else if (tebak > angka) cout<<"Angka anda terlalu BESAR.\n";

}
    while(tebak!=angka);

    cout<<" Benar! Anda telah menebak sebanyak " << n << "kali.\n";
    return 0;
    }


