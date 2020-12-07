HALF DIAMOND STAR PATTERN
#include <stdio.h>
int main() {
int i, j, f=1;
for(i=1;i<10;i++)
{
for(j=1; j<=f; j++)
{
printf("*");
}
if(i < 5)
{
f++;
}
else
{
f--;
}
printf("\n");
}
return 0;
}
