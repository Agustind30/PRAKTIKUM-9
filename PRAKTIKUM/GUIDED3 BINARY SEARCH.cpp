#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>

int pencarian (char st[], char m)
{
	int i, posisi, panjang;
	
	i=0;
	posisi = -1;
	panjang = strlen (st);
	while ((1<panjang-1) &&posisi == -1)
	{
		if (st[i]==m)
			posisi = i;
			i++;
	}
	return posisi;
}

int main()
{
	printf ("\tPencarian dengan metode Binary Search\n\n");
	
	char kalimat[]= "Agustin Dwinurcahyani";
	char dicari = 't';
	printf ("\n Posisi %c dalam string %s berada pada indeks ke- [%d)\n", dicari, kalimat, pencarian(kalimat,dicari));
	system ("PAUSE");
	return 0;
}
