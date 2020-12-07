19. Write a C program to convert Hexadecimal to Decimal number system.
#include<stdio.h>
#include<math.h>
int main()
{
int dn=0;
int c=0,l=0,i=0;
char hdn[20];

printf("Enter a Hexadecimal Number:");
scanf("%s",hdn);
while(hdn[i]!='\0')
{
l++;
i++;
}
l--;
i=0;
while(l>=0)
{
c=hdn[l];
if(c>=48&&c<=57)
c=c-48;

else if(c>=97&&c<=102)
c=c-97+10;

else if(c>=65&&c<=70)
dn=c-65+10;


dn=dn+(c*pow(16,i));
l--;
i++;

}
printf("\nDecimal Equivalent:\n %d",dn);
return 0;
}

