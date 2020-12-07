2. Write a C program to swap first and last digits of a number.
#include <stdio.h>
#include <math.h>

int main()
{
int n,firstNum, lastNum,digits, swapDigit;

printf("Enter number = ");
scanf("%d", &n);

lastNum = n % 10;

digits    = (int)log10(n);


firstNum = (int) (n / pow(10, digits));


swapDigit  = lastNum;
swapDigit *= (int) round(pow(10, digits));
swapDigit += n % ((int)round(pow(10, digits)));
swapDigit -= lastNum;
swapDigit += firstNum;

printf("Number after swapping first and last digit: %d", swapDigit);

return 0;
}
