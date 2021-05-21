#include <stdio.h>


int main (){

char b[2];

printf("Type a letter:\n");

fgets(b,2,stdin);

if (*b == 'a' || *b == 'e' || *b == 'i' || *b == 'o' || *b == 'u' || *b == 'A' || *b =='E' || *b == 'I' || *b == 'O' || *b == 'U')

printf("vowel\n");

else
printf( "consonant\n");
return 0;
}

