/*program to calculate area of triangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int base,height,area;
	clrscr();
	printf("\n Enter the value of base=");
	scanf("%d",&base);
	printf("\n Enter the value of height=");
	scanf("%d",&height);
	area=base*height;
	printf("\n Area of Triangle=%d",area);
	getch();

}