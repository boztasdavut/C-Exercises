#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
char control[10];
char sentence[100];
int sayac=0;
int a=0;
printf("Enter a sentence: ");
gets(sentence);
printf("Enter the word you want to find the number of repeats: ");
gets(control);
int uzunluk=strlen(control);
for(int i=0; sentence[i]!='\0'; i++)
{
    int m=i;
    for(int j=0; j<uzunluk; j++)
    {
        if(sentence[m]==control[j])
        {
            m++;
            a++;
        }
        else
        {
            break;
        }
        if(a==uzunluk)
        {
            sayac++;
        }

    }
a=0;
}
printf("%d",sayac);



return 0;
}


















