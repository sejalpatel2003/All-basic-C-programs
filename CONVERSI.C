/*program to convert inch into feet,meter,centimeter*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float inch,feet,meter,cm;
	clrscr();
	printf("\nEnter length in inch=");
	scanf("%f",&inch);
	feet=inch/12;
	printf("\n Feet value=%f",feet);
	meter=inch*0.0254;
	printf("\n Meter vaue=%f",meter);
	cm=inch*2.54;
	printf("\n Centimeter value=%f",cm);
	getch();
}