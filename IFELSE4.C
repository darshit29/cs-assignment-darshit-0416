4. Write a C program to input month number and print number of days in that month.

#include <stdio.h>
#include <ctype.h>
int main() {
int a;
printf("Enter a number from 1 to 12 \n");
scanf("%d",&a);
if(a==1|| a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
printf("No. of days in this month is 31");
else if(a==4 || a==6 || a==9 || a==11)
printf("No. of days in this month is 30");
else if(a==2)
printf("No. of days in this month can be 28 or 29");
else
printf("Enter no. only from 1 to 12");
return 0;
}
