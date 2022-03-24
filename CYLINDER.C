/*Program to calculate surface area and volume of cylinder*/
/*surface area=2*(l*b+b*h+l*h)*/
/*volume=l*b*h*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,h,surfacearea,volume;
	clrscr();
	printf("\nEnter the value of Length=");
	scanf("%d",&l);
	printf("\nEnter the value of Breadth=");
	scanf("%d",&b);
	printf("\nEnter the value of Height=");
	scanf("%d",&h);
	surfacearea=2*(l*b+b*h+l*h);
	printf("\nSurface area of Cylinder=%d",surfacearea);
	volume=l*b*h;
	printf("\nVolume of Cylinder=%d",volume);
	getch();
}