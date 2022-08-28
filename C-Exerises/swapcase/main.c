#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
char word[25];
printf("enter a word ");
gets(word);
for(int i=0; word[i]!='\0'; i++)
{
    if(islower(word[i])!=0)
    {
        word[i]=toupper(word[i]);
    }
    else if(isupper(word[i])!=0)
    {
        word[i]=tolower(word[i]);
    }
}
printf("%s",word);





return 0;
}


















