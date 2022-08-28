

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
char word[50];
int i=0, j, check;
printf("enter a sentence: ");
gets(word);
while(word[i]!='\0') 
{
      check=0;
    if(word[i]==' ') 
	{
         j=i;
         while(word[j-1]!='\0') 
		{
        	word[j] = word[j+1];
            j++;
        }
        check = 1;
    }
      if(check==0)
      i++;
}
   
printf("**-------------------**\n");
printf("\nblank form of the sentence %s", word);
   



return 0;
}


