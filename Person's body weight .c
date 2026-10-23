#include<stdio.h>
int main()
{
float weight,height,bmi;
printf("Enter weight in kg:");
scanf("%f",&weight);
printf("Enter height in meters:");
scanf("%f",&height);
bmi = weight/height*height;
printf("%f",bmi);
if(bmi<18.5)
printf("Category = Underweight");
else if(bmi<25)
printf("Category = Normal");
else if(bmi<30)
printf("Category = Overweight");
else
printf("Category = Obese");
}