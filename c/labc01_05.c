#include <stdio.h>
#include <stdlib.h>

int main(){
	int amount = 50;
int one = 0, five = 0, twenty = 0, fifty = 0;

fifty = amount / 50;
amount = amount % 50;
twenty = amount / 20;
amount = amount % 20;
five = amount / 5;
amount = amount % 5;
one = amount;

printf("1: %d\n", one);
printf("5: %d\n", five);
printf("20: %d\n", twenty);
printf("50: %d\n", fifty);
return 0;
}