#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	const int Ar [11]= {6, 7, 12, 23, 46, 69, 77, 79, 82, 92, 301}; //untuk proses ascending
	int tar,i;
	
	for (int i=0; i<11; i++)
	{
		cout<<Ar[1]<< " ";
	}
	cout<<"\n\n Masukkan data yang akan dicari : ";
	cin>>tar;
	
	int awal=0, akhir=11, tengah;
	
	while (awal<= akhir)
	{ tengah = (awal + akhir)/2;
		if (tar> Ar [tengah]) //untuk data descending ubah tanda > menjadi <
		{awal = tengah + 1;}
		
		else if (tar< Ar[tengah]) //untuk data descending ubah tanda < menjadi >
		{akhir = tengah -1;}
		
			else {awal = akhir + 1;
			}
	}
	if (tar == Ar [tengah])
	{
		cout <<" Data ditemukan, Index ke- "<<tengah+1<<endl;
	}
	else
	{
		cout<<"Data tidak ditemukan "<<endl;
	}
	getch();
}
