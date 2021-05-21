#include <stdio.h>
#include <math.h>

int main (){


float a, b, c, x;

printf("Type your triangle measurements:\n");

scanf ("%f %f %f", &a, &b, &c);

if (a > b && a > c){
a = pow(a,2);
x = pow(b,2) + pow(c,2);
if (a != x){
printf ("0\n");}

else {
printf("1\n");}
}

if (b > a && b > c){
b = pow(b,2);
x = pow(a,2) + pow(c,2);
if (b != x){
printf ("0\n");}

else {
printf("1\n");}
}

if (c > b && c > a){
c = pow(c,2);
x = pow(a,2) + pow(b,2);
if (c != x){
printf ("0\n");}

else {
printf("1\n");}
}
return 0;
}

