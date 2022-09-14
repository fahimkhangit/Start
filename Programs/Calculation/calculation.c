// This program is calculating gross salary//

#include <stdio.h>

int main(){
float basicSalary;
float allowance;
float houseRent;
float grossSalary;


//Taking input
printf("Enter your basic salary: ");
scanf("%f", &basicSalary);


//Calculation part
allowance = .4 * basicSalary;
houseRent = .2 * basicSalary;
grossSalary = basicSalary + allowance + houseRent;


//Giving output
printf("Your gross salary is: %.2f TK", grossSalary);
return 0;
}

