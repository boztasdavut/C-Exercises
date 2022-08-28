

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int n;
printf("Enter a Number: ");
scanf("%d", &n);
printf("a     b     c\n");
printf("--------------\n");
for(int a=1; a<=n; a++)
{
	for(int b=1; b<=n; b++)
	{
		for(int c=1; c<=n; c++)
		{
			if(pow(a,2)+pow(b,2)==pow(c,2))
			{
				printf("%d     %d     %d\n", a,b,c);
			}
		}
	}
}

	


return 0;
}