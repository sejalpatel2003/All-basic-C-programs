/*Program to perform addition,subtraction,multiplicaton,division of two numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float num1,num2,sum=0,sub=0,mult=0,div=0;
	clrscr();
	printf("\n Enter any 2 numbers:");
	scanf("%f %f",&num1,&num2);
	sum=num1+num2;
	printf("\nAddition=%f",sum);
	sub=num1-num2;
	printf("\nSubtraction=%f",sub);
	mult=num1*num2;
	printf("\nMultiplication=%f",mult);
	div=num1/num2;
	printf("\nDivision=%f",div);
	getch();
}
