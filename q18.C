18. Write a C program to convert Hexadecimal to Octal number system.
#include<stdio.h>
long int hdn_bn(char hdn[])
{
long int bn,place;
int i=0;
bn=0;
place=10000;
for(i=0;hdn[i]!='\0';i++)
{
bn=bn*place;

switch(hdn[i])
{
case'0':
bn+=0;
break;
case'1':
bn+=1;
break;
case'2':
bn+=10;
break;
case'3':
bn+=11;
break;
case'4':
bn+=100;
break;
case'5':
bn+=101;
break;
case'6':
bn+=110;
break;
case'7':
bn+=111;
break;
case'8':
bn+=1000;
break;
case'9':
bn+=1001;
break;
case'a':
case'A':
bn+=1010;
break;
case'b':
case'B':
bn+=1011;
break;
case'c':
case'C':
bn+=1100;
break;
case'd':
case'D':
bn+=1101;
break;
case'e':
case'E':
bn+=1110;
break;
case'f':
case'F':
bn+=1111;
break;
default:
printf("Invalid hexadecimal input.");
}

}

return bn;
}

long int bn_oct(long bn)
{
long int octal,place;
int i=0,r,val;
octal=0;
place=1;

while(bn>0)
{
r=bn%1000;

switch(r)
{
case 0:
val=0;
break;
case 1:
val=1;
break;
case 10:
val=2;
break;
case 11:
val=3;
break;
case 100:
val=4;
break;
case 101:
val=5;
break;
case 110:
val=6;
break;
case 111:
val=7;
break;
}

octal=(val*place)+octal;
bn/=1000;

place*=10;
}

return octal;
}

long int hdn_oct(char hdn[])
{
long int octal,bn;

bn=hdn_bn(hdn);

octal=bn_oct(bn);

return octal;
}

int main()
{
char hdn[20];
printf("Enter the value for hexadecimal:");
scanf("%s",hdn);

printf("Equivalent Octal Value = %ld",hdn_oct(hdn));

return 0;
}
