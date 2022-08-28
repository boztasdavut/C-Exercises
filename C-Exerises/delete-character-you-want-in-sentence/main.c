

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
char dizi[100];
char c;
printf("Enter a sentence: ");
gets(dizi);
printf("Which character should be deleted? ");
scanf("%c", &c);
for(int i=0; dizi[i]!='\0'; i++)
{
	if(dizi[i]==c)
	{
		for(int j=i; dizi[j]!='\0'; j++)
		{
			dizi[j]=dizi[j+1];
		}
	}
}
printf("%s", dizi);

return 0;
}