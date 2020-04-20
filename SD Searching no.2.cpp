#include <stdio.h>
#include <iostream>
#define N 255

using namespace std;

void gantikata(char *data, char cari, char ganti){
    int i=0;

    while(*data !='\0'){
        *data=((*data == cari)?ganti:*data);
        data++;
        i++;
    }
}

int main(){

    char data[100], cari, ganti;
    cout << "\n\nMasukkan sebuah kalimat : ";
    cin >> data;
    cout << "> Masukkan karakter yang dicari: ";
    cin >> cari;
    cout << "> Karakter pengganti: ";
    cin >> ganti;

    gantikata(data,cari, ganti);
    cout <<"\nHasil replace adalah = "<< data;

    return 0;
}
