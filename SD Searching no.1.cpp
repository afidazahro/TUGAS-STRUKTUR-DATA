#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i;
	int n;
	int cari,ketemu=0;
	int X[100];

	cout<<"Pencarian Angka";
	cout<<endl;
	cout<<"masukkan data : ";
	cin>>n;
	cout<<endl;
	for (i=1;i<=n;i++)
	{
		cout<<"data ke-"<<i<<":";
		cin>>X[i];
	}
	cout<<endl;
	cout<<"data yang ingin dicari : ";
	cin>>cari;

	for (i=0;i<=n;i++)
	{
		if (X[i]==cari)
	{
		ketemu=1;
		cout<<"Data ditemukan, Index ke- "<<i;
	}
}

	if (ketemu==0)
	{
		cout<<"data tidak ditemukan "<<endl;
	}
	getch();
	}
