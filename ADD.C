/*Program for addition of two numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,add=0;
	clrscr();
	printf("\nEnter the 2 numbers:");
	scanf("%d %d",&num1,&num2);
	add=num1+num2;
	printf("\nAddition=%d",add);
	getch();

}