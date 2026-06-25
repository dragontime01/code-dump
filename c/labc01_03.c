#include <stdio.h>
#include <stdlib.h>

int main(){
float preGrade = 1.75;   
int preCredit = 21;   
int credit = 18;   
float requiredGrade = 2.00;

    float termGradeNeeded = (requiredGrade * (preCredit + credit) - preGrade * preCredit) / credit;

    printf("The GPA this semester should be %.2f\n", termGradeNeeded);

return 0;
}