#include <stdio.h>


int main (){


float a, b, c, x;


printf("Type the triangle measurements:\n");

scanf("%f %f %f", &a, &b, &c);

if (a > b && a > c){

x = b + c;
if (a > x){
printf ("0\n");}

else {
printf("1\n");}
}

if (b > a && b > c){

x = a + c;
if (b > x){
printf ("0\n");}

else {
printf("1\n");}
}

if (c > a && c > b){

x = a + b;
if (c > x){
printf ("0\n");}

else {
printf("1\n");}
}
return 0;
}
