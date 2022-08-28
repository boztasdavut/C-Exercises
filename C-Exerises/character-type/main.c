/* program that determines whether the entered character is numeric, alphabetic or special character */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int i;
void determination(char a);
int x;
char c;
printf("how many charactec do you want to enter ");
scanf("%d", &x);
for(i=1; i<=x; i++)
{
	printf("Enter a character ");
	scanf(" %c", &c);
	determination(c);
	printf("\n");
	
}

	


return 0;
}
void determination(char a)
{
	if((a>='A') && (a<='Z') || (a>='a') && (a<='z'))
	{
		printf("%c is a alpha.", a);
	}
	else if((a<='9') && (a>='1'))
	{
		printf("%c is a numeric.", a);
	}
	else
	printf("%c is a special character.", a);
}