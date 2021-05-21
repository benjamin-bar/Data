#include <stdio.h>


int main (){


char a;
int b;

    printf("\nEnter a character :\n");
    scanf("%c" , &a);
b = a;

if (b >= 0 && b < 48 || b >= 58 && b < 65 || b >= 91 && b < 97 || b >= 123){
printf("special character\n");
}
else if(b >= 65 && b < 91 || b >= 97 && b < 123){
printf("alphabet\n");
}
else if (b >= 48 && b < 58){
    printf("digit\n");
}
return 0;
}
