#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
void control(char *list);
char word[100];
printf("Enter a sentence ");
gets(word);
control(word);



return 0;
}
void control(char *list)
{
    int m=0;
    for(int i=0; i<strlen(list); i++)
    {
        if(isalnum(*(list+i))==0)
        {
            m++;
        }
    }
printf("There are %d special character in the entered sentence.",m);
}

