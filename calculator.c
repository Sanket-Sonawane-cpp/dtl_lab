#include<stdio.h>
#include<math.h>
int main() {
 int a, b;
 printf("enter two numbers\n");
 scanf("%d %d", &a, &b); 
 char op;
 printf("enter operation:\n");
 scanf(" %c", &op);
 if(op == '+') {
 printf("a + b = %d", a + b);
 } else if (op == '-') {
 printf("\n a - b = %d", a - b);
 } else if (op == '^') {
 printf("\n a ^ b = %.2f \n", pow(a,b));
 }
 return 0;
 
}
