#include <stdio.h>

int main(){

    int n = 0;
    printf("insert range");
    if (scanf("%d", &n) != 1){
        return 1;
    }

    int number[n];
    printf("num");
    for (int i = 0; i < n; i++){
        scanf("%d", &number[i]);
    }

    int maxval = number[0];

    for (int i = 1; i < n; i++) {

        if (number[i] > maxval){
            maxval = number[i];
        }

    }

    printf("%d\n", maxval);

    return 0;
}