2. Write a C program to check whether a character is uppercase or lowercase alphabet.

#include <stdio.h>
#include <ctype.h>
int main() {
char a;
printf("Enter a character \n");
scanf("%c",&a);
if(isupper(a)!=0)
{
printf("The charecter is UPPERCASE");
}
else {  printf("The charecter is LOWERCASE"); }
return 0;
}
