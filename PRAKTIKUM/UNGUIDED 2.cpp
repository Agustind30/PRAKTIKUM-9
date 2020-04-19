#include <stdio.h>
#define N 255
  
/* prototype fungsi */

void replace(char*, char, char);
int main()
{
  char data[N], find, ganti;
   printf("\nMasukkan sebuah kalimat: ");
   scanf("%[^\n]", data);
   
   printf("> Masukkan karakter yang dicari: ");
   getchar();
   scanf("%c", &find);
   
   printf("> Karakter pengganti: ");
   getchar();
   scanf("%c", &ganti);
   
   replace(data,find, ganti);
   printf("\nHasil replace adalah sebagai berikut: %s\n\n", data);
  
  return 0;
}
  
void replace(char *data, char find, char replace)
{
int i=0;
  
while(*data !='\0')
	{
  /* fungsi mengubah karakter */
  
  *data=((*data == find)?replace:*data);
  data++;
  i++;
	}
}


