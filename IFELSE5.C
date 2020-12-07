5. Write a C program to count total number of notes in given amount.

#include <stdio.h>
int main()
{
int amount,notes;
int total;
int denomination[9] = { 2000, 500, 200, 100, 50, 20, 10, 5, 1 };
printf("Enter amount: ");
scanf("%d", &amount);
for (int i = 0; i < 9; i++)
{
notes = amount / denomination[i];
if (notes)
{
amount = amount % denomination[i];
printf("%d notes of %d = %d \n", notes, denomination[i],notes * denomination[i]);
total=total+notes;
}
}
printf("Minumum number of notes are %d",total);
return 0;
}

