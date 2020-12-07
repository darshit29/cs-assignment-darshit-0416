8. Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include <stdio.h>

int main()
{
int side1 , side2 , side3;
printf ("enter first side");
scanf ("%d" , &side1);
printf ("enter second side");
scanf ("%d" , &side2);
printf ("enter third side");
scanf ("%d" , &side3);
if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
{        printf ("Triangle is valid");    }
else
{        printf ("Triangle is not valid");    }
return 0;
}


