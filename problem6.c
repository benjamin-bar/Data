#include <stdio.h>



int main (){


float input, rate, ac, iva, surcharge, total;



printf("Type the amount of energy consumed:\n");

scanf("%f", &input);

if (input > 400)

iva = .30;

else

iva = 0;

surcharge = iva * input;


if (input < 200){
rate = 1.20;
ac = input * rate;
total = surcharge + ac;
	if (total < 100){
rate = 1.20;
ac = input * rate;
total = 100;
printf("Consumption: %.0f\n Rate: %.2f\n Amount charges: %.1f\n Surcharges: %.1f\n Total: %.1f\n", input, rate, ac, surcharge, total);
}
else{
printf("\n Consumption: %.0f\n Rate: %.2f\n Amount charges: %.1f\n Surcharges: %.1f\n Total: %.1f\n\n", input, rate, ac, surcharge, total);}
}

else if (input >= 200 && input < 400) {
rate = 1.50;
ac = input * rate;
total = surcharge + ac;
printf("\n Consumption: %.0f\n Rate: %.2f\n Amount charges: %.1f\n Surcharges: %.1f\n Total: %.1f\n\n", input, rate, ac, surcharge, total);
}
else if (input >=400 && input < 600) {
rate = 1.80;
ac = input * rate;
total = surcharge + ac;
printf("\n Consumption: %.0f\n Rate: %.2f\n Amount charges: %.1f\n Surcharges: %.1f\n Total: %.1f\n\n", input, rate, ac, surcharge, total);
}
else {
rate = 2.00;
ac = input * rate;
total = surcharge + ac;
printf("\n Consumption: %.0f\n Rate: %.2f\n Amount charges: %.1f\n Surcharges: %.1f\n Total: %.1f\n\n", input, rate, ac, surcharge, total);
}
return 0;
}
