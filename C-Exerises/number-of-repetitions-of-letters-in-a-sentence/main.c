

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
char word[1000], ch;
int amount = 0;

printf("Enter a word: ");
gets(word);

printf("Enter the letter you want to know how many times it is repeated: ");
scanf("%c", &ch);

for (int i = 0; word[i] != '\0'; i++) 
{
    if (ch == word[i])
    {
    	amount ++;
	}    
}

printf("Frequency of %c = %d", ch, amount);

return 0;
}

