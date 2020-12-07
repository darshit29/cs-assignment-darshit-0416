
7. Write a C program to find two's complement of a binary number.
#include <stdio.h>
int main() {
int num,ocomp=0,mul=1,x,flag=0;
printf("Enter binary number: ");
scanf("%d",&num);
while (num>0) {
x=num%10;
if (flag==0) {
if (x==1)
flag=1;
ocomp+=x*mul;
mul*=10;
num/=10;
continue;
}
num/=10;
x+=(x==0)?1:-1;
ocomp+=x*mul;
mul*=10;
}
printf("The two's complement is: %d",ocomp);
return 0;
}
