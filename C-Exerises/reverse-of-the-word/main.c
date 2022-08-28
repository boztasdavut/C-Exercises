

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
char dizi[100];
char adizi[100];
char *p;
int j=0;
printf("Enter a sentence ");
gets(dizi);
int x=strlen(dizi);
for(p=dizi; p<=x+dizi; p++)
{
	adizi[j]=*p;
	j++;
}

for(int m=x; m>=0; m--)
{
	printf("%c",adizi[m]);
}



return 0;
}