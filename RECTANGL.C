/*Program to calculate area of Rectangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int length,width,area;
	clrscr();
	printf("\nEnter the value of length=");
	scanf("%d",&length);
	printf("\nEnter the value of width=");
	scanf("%d",&width);
	area=length*width;
	printf("\nArea of Rectangle=%d",area);
	getch();
}