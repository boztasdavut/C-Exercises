
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int i;
int sayac=0;	
char adizi[100];
printf("Enter a sentence: \n");
gets(adizi);

for(i=0; adizi[i]!='\0'; i++)
{
	if(adizi[i]==' ' && adizi[i+1]!=' ')
	{
		sayac++;	
	}
}
printf("word count of the given sentence: %d", sayac+1);
	
return 0;
}

