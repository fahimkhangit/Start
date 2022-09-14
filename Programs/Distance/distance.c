// This program is for converting  distance between Mirpur to Ashulia//
#include<stdio.h>
int main(){

float kiloM, meter, centiM, feet, inches;
//Taking input

printf("Enter the distance between Mirpur to Ashulia [In Kilometre]: ");
scanf("%f", &kiloM);
//Calculation part
meter = kiloM * 1000;
centiM = kiloM * 100000;
feet = kiloM * 3280.84;
inches = kiloM * 39370.08;
// Giving output
printf("Distance in meter is  %f\n", meter);
printf("Distance in centimetre is  %f\n", centiM);
printf("Distance in feet is  %f\n", feet);
printf("Distance in inches is  %f\n", inches);
return 0;
}
