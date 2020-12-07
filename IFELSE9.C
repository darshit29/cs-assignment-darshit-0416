9. Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <stdio.h>
int main()
{
int a,b,c ;
printf("Enter all the angles of the triangles : ");
scanf("%d %d %d",&a,&b,&c);
if (a==b){
if(b==c){
printf("The triangle is equilateral");
}
else{
printf("The triangle is iscosceles");
}
}
else if(c==b){
printf("The triangle is isosceles");
}
else if(c==a){
printf("The triangle is isosceles");
}
else{
printf("The triangle is scalene");
}
return 0;
}


