11. Write a C program to convert Octal to Binary number system.
#include <math.h>
#include <stdio.h>
long long convert(int octal);
int main() {
int octal;
printf("Enter an octal number: ");
scanf("%d", &octal);
printf("%d in octal = %lld in binary", octal, convert(octal));
return 0;
}

long long convert(int octal) {
int deci = 0, i = 0;
long long binary = 0;

// converting octal to decimal
while (octal != 0) {
deci += (octal % 10) * pow(8, i);
++i;
octal /= 10;
}
i = 1;

// converting decimal to binary
while (deci != 0) {
bin += (deci % 2) * i;
deci /= 2;
i *= 10;
}
return bin;
}
