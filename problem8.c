#include <stdio.h>


int main (){

float a, b, c, x;


printf("Type the grades:\n");

scanf("%f %f %f", &a, &b, &c);

if (a >= 7.0 && b >= 7.0 && c >= 7.0){

x = (a + b + c)/3;

printf("%.2f\n", x);

}
else
printf("6.0\n");

return 0;

}

