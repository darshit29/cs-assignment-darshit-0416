6. Write a C program to find one's complement of a binary number.
#include <stdio.h>
int main() {
int num,ocomp=0,mul=1,x;
printf("Enter binary number: ");
scanf("%d",&num);
while (num>0) {
x=num%10;
num/=10;
x+=(x==0)?1:-1;
ocomp+=x*mul;
mul*=10;
}
printf("The one's complement is: %d",ocomp);
return 0;
}
