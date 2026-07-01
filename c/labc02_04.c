#include <stdio.h>
#include <stdlib.h>

int main(){
//input money
char money[100];
fgets(money, 100, stdin);
float money_value = atof(money);


//tax calculation
float taxmini = 5.0;
float taxmaxi = 10.0;
float tax = 0.0;

if 
(money_value < 300000 && money_value >= 0){
	
	tax = money_value * (taxmini / 100);
	printf("%.2f\n", tax);
}
else if (money_value >= 300000){
	tax += 300000 * (taxmini / 100);
	money_value -= 300000;
	tax += money_value * (taxmaxi / 100);
	printf("%.2f\n", tax);
}
else{
	printf("Error: Salary must be greater or equal to 0\n");
}	


}