
#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main(void)
{
int a, b;


printf("Type your choice:\n");

scanf("%d", &a);


    srand(time(0));

b = rand() % 3;

if (a == 0 && b == 1 || a == 1 && b == 2 || a == 2 && b == 0)
printf("Computer wins\n");

else if (a = b)
printf("It´s a tie\n");


else
printf("User wins\n");

    return 0;
}
