10. Write a C program to calculate profit or loss.

#include <stdio.h>

int main()
{
int sp , cp;
printf ("enter cost price of product - ");
scanf ("%d" , &cp);
printf ("enter selliing price of product - ");
scanf ("%d" , &sp);
if (sp>cp)
{        printf ("Profit is of Rs. %d" , sp-cp);    }
else if (cp > sp)
{        printf ("Loss is of Rs. %d" , cp-sp);    }
else
{        printf ("No profit or loss");    }
return 0;
}





