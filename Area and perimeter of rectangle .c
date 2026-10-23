#include<stdio.h>
void main()
{
float length,breadth,area,perimeter;

printf("Enter length of the rectangle");
scanf("%f",&length);
printf("\n Enter breadth of the rectangle");
scanf("%f",&breadth);
area=length*breadth;
perimeter=2*(length+breadth);
printf("Area of rectangle=%f",area);
printf("Perimeter of rectangle=%f",perimeter);
}