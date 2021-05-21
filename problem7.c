#include <stdio.h>
#include <math.h>


int main (){


float a, b, c, x, y, z;

printf("Type the values:\n");

scanf("%f %f %f", &a, &b, &c);

x = pow(b,2) - (4 * a * c);

y = (-b + sqrt(x))/(2 * a);
z = (-b - sqrt(x))/(2 * a);

if(x > 0){

printf("\n%.1f %.1f\n", z, y);

}
else if (x == 0){

printf("\n%.1f\n", z);
}

else

printf("\nNo real roots.\n");

return 0;
}

