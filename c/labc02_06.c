#include <stdio.h>
#include <stdlib.h>

int main(){
//char checker
char c[3];
fgets(c, 2, stdin);

//uper
if (c[0] >= 'A' && c[0] <= 'Z'){
    printf("upper case\n");

}
//lower
else if (c[0] >= 'a' && c[0] <= 'z'){
    printf("lower case\n");
}
//digit
else if (c[0] >= '0' && c[0] <= '9'){
    printf("digit\n");
}
else{
    printf("others\n");
}
}
