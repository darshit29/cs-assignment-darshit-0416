13. Write a C program to convert Octal to Hexadecimal number system.
#include <stdio.h>
int main() {
int oct,dec=0,mul=1,i=0,x,len=0;
char hex[20]={0},hex_rev[20]={0};
printf("Enter octal number: ");
scanf("%d",&oct);
while (oct>0) {
dec+=(oct%10)*mul;
oct/=10;
mul*=8;
}
while (dec>0) {
x=dec%16;
if (x>9)
hex_rev[i]=x+55;
else
hex_rev[i]=x+48;
i++;
dec/=16;
len++;
}
for(i=0;i<len;i++)
hex[i]=hex_rev[len-i-1];
printf("The number in hexadecimal is: %s",hex);
return 0;
}
