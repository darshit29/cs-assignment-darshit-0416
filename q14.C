14. Write a C program to convert Decimal to Binary number system.
#include <math.h>
#include <stdio.h>
long long convert(int n);
int main() {
int decimal;
printf("Enter a decimal number: ");
scanf("%d", &decimal);
printf("%d in decimal = %lld in binary", decimal, convert(n));
return 0;
}

long long convert(int decimal) {
long long binary = 0;
int rem, i = 1, step = 1;
while (decimal != 0) {
rem = n % 2;
printf("Step %d: %d/2, Remainder = %d, Quotient = %d\decimal", step++, decimal, rem, decimal / 2);
n /= 2;
binary += rem * i;
i *= 10;
}
return binary;
}
