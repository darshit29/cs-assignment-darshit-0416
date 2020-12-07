8. Write a C program to convert Binary to Octal number system.
#include <stdio.h>
#include <math.h>
int main() {
int bin,oct_rev=0,dec=0,rem,mul=1;
printf("Enter number in binary: ");
scanf("%d",&bin);
while (bin>0) {
rem=bin%1000;
while (rem>0) {
dec+=(rem%10)*mul;
rem/=10;
mul*=2;
}
mul=1;
oct_rev=oct_rev*10+dec;
dec=0;
bin/=1000;
}
int temp=oct_rev,oct=0;
while (temp>0) {
oct=oct*10+temp%10;
temp/=10;
}
printf("The octal value is: %d",oct);
return 0;
}
