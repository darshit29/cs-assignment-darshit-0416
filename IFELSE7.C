7. Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>

int main()
{
int a,b,c;
printf("Enter three angles : ");
scanf("%d %d %d",&a,&b,&c);
if (a+b+c==180){
printf("The triangle is valid");
}
else{
printf("The triangle is not valid pls enter again");
}
return 0;
}
