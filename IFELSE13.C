13. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition: For first 50 units Rs. 0.50/unit For next 100 units Rs. 0.75/unit For next 100 units Rs. 1.20/unit For unit above 250 Rs. 1.50/unit An additional surcharge of 20% is added to the bill

#include <stdio.h>
int main() {
int ele; float bill,temp,extra;
printf("Input electric units ");
scanf("%d",&ele);
if(ele<=50)
{ bill=ele*0.5;  }
else if(ele>50 && ele<=150)
{ temp=ele-50;
bill=(50*0.5)+(temp*0.75);
}
else if(ele>150 && ele<=250)
{ temp=ele-150;
bill=(50*0.5)+(100*0.75)+(temp*1.2);
}

if(ele>250)
{ extra=ele-250;
extra=extra*0.2;
}
else { extra=0;}
bill=bill+extra;
printf("The electicity bill is %0.2f",bill);
return 0;
}
