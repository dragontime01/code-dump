#include <stdio.h>
#include <stdlib.h>

int main(){
//input 3
char a[10],b[10],c[10];
fgets(a, 10, stdin);
fgets(b, 10, stdin);
fgets(c, 10, stdin);
int x = atoi(a);
int y = atoi(b);
int z = atoi(c);

if (x == y && y == z) {
	printf("equilateral\n");
}

else if (x + y <= z || x + z <= y || y + z <= x || x <= 0 || y <= 0 || z <= 0) {
	printf("invalid\n");
}
else if (x != y && y != z && x != z) {
	printf("scalene\n");

}
else {
	printf("isosceles\n");
}
}