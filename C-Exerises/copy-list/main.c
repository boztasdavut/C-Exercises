

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
char list[5]={'d','a','v', 'u','t'};
char *p;
char *q;
char copy_list[5];
p=copy_list;
for(q=list; q<=list+5; q++)
{
	*p=*q;
	p++;
}


return 0;
}