3. Write a C program to input week number and print week day.

#include <stdio.h>
#include <ctype.h>
int main() {
int a;
printf("Enter a number from 1 to 7 \n");
scanf("%d",&a);
if(a==1)
printf("Monday");
else if(a==2)
printf("Tueday");
else if(a==3)
printf("Wednessday");
else if(a==4)
printf("Thursday");
else if(a==5)
printf("Friday");
else if(a==6)
printf("Saturday");
else if(a==7)
printf("Sunday");
else
printf("Enter no. only from 1 to 7");
return 0;
}

