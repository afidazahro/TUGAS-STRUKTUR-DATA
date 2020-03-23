#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

typedef struct nama {
string data_nama;
nama *next_nama;
};
nama *head_nama;

typedef struct nim {
int data_nim;
nim *next_nim;
};
nim *head_nim;

void initHead();
int Emptynama();
int Emptynim();
void insertnama(string datanama);
void insertnim(int datanim);
void tampil();
void hapusnama();
void hapusnim();

void initHead()
{

    head_nama = NULL; //NULL <> null!!
    head_nim = NULL;
}


int Emptynama()
{
    return(head_nama ==NULL) ?1:0;
}

int Emptynim()
{
    return(head_nim == NULL) ? 1:0;
}


void insertnama (string datanama)
{
    nama *baru, *bantu;
    baru = new nama;
    baru->data_nama = datanama;
    baru->next_nama = NULL;
    if(Emptynama()==1)
    {
        head_nama = baru;
        head_nama->next_nama = NULL;
    }
    else
    {
        bantu=head_nama;
        while(bantu->next_nama!=NULL)
        {
            bantu=bantu->next_nama;
        }
        bantu->next_nama=baru;
    }
}

void insertnim (int datanim)
{
    nim *baru, *bantu;
    baru = new nim;
    baru->data_nim = datanim;
    baru->next_nim = NULL;
    if(Emptynim()==1)
    {
        head_nim = baru;
        head_nim->next_nim = NULL;
    }
    else
    {
        bantu=head_nim;
        while(bantu->next_nim!=NULL)
        {
            bantu=bantu->next_nim;
        }
        bantu->next_nim=baru;
    }
}


void hapusnama()
{
    nama *hapus, *bantu;
    string d;
    if (Emptynama()==0)
    {
        if(head_nama->next_nama!=NULL)
        {
            bantu=head_nama;
            while (bantu->next_nama->next_nama!=NULL)
            {
                bantu=bantu->next_nama;
            }
            hapus=bantu->next_nama;
            d=hapus->data_nama;
            bantu->next_nama = NULL;
            delete hapus;
        }else
        {
            d=head_nama->data_nama;
            head_nama = NULL;
        }
        cout<<" "<<d<<" terhapus\n";
    }
            else
                cout<<" (masih kosong)\n";
        }


void hapusnim()
{
    nim *hapus, *bantu;
    int d;
    if (Emptynama()==0)
    {
        if(head_nim->next_nim!=NULL)
        {
            bantu=head_nim;
            while (bantu->next_nim->next_nim!=NULL)
            {
                bantu=bantu->next_nim;
            }
            hapus=bantu->next_nim;
            d=hapus->data_nim;
            bantu->next_nim = NULL;
            delete hapus;
        }else
        {
            d=head_nim->data_nim;
            head_nim = NULL;
        }
        cout<<" "<<d<<" terhapus\n";
    }
            else
                cout<<" (masih kosong)\n";
}




void tampil()
{
    nim *bantu;
    bantu = head_nim;

    nama *help;
    help = head_nama;


    if(Emptynim()==0 && Emptynama()==0)
    {
        cout<<"\tNama\t\tNIM\n";
        cout<<"\t------------\n";
        while(bantu!=NULL && help!=NULL)
        {
            cout<<"\t"<<help->data_nama<<"\t\t"<<bantu->data_nim<<"\n";
            help=help->next_nama;
            bantu=bantu->next_nim;
        }
        cout<<"\n";
    }
    else
        cout<<" (masih kosong)\n";
    }


int main()
{
    cout<<"\t\t\t=================================================================================\n";
    cout<<"\t\t\t Single Linked List Non Circular\n\t\t\t=======================================\n\n\n";
    initHead();
    cout<<"done\n\n\n Tampilkan isi List :\n";
    cout<<" ";
    tampil();

    cout<<"\n Masukkan Nama dan NIM :\n";
    string data_nama;
    int data_nim;
    for(int i=1;i<=4;i++)
    {
        cout<<" Masukkan nama ke-"<<i<<":";
        cin>>data_nama;
        insertnama (data_nama);
        cout<<" Masukkan nim ke-"<<i<<":";
        cin>>data_nim;
        insertnim (data_nim);
    }
    cout<<"\n";

    cout<<" Tampilkan isi list :\n\n";
    tampil();

    cout<<"\n Hapus 1 data terakhir\n\n";
    for (int i=1;i<2;i++)
    {
        hapusnama();
        hapusnim();
    }
    cout<<"\n";

    cout<<" Tampilkan isi list: \n\n";
    tampil();
}
