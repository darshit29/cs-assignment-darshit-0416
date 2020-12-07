10. Write a C program to convert Binary to Hexadecimal number system.

#include <stdio.h>
int main()
{
long int binary, hexa = 0, i = 1, r;

printf("Enter the binary number: ");
scanf("%ld", &binary);
while (binary != 0)
{
r = binary % 10;
hexa = hexa + r * i;
i = i * 2;
binary = binary/ 10;
}
printf("Equivalent hexadecimal value: %lX", hexa);
return 0;
}

