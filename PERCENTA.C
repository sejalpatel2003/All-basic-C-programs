/*program to calculate percentage*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float eng,hin,mar,phy,math,total=0,per=0;
	clrscr();
	printf("\nEnter the marks of English:");
	scanf("%f",&eng);
	printf("\nEnter the marks of Hindi:");
	scanf("%f",&hin);
	printf("\nEnter the marks of Marathi:");
	scanf("%f",&mar);
	printf("\nEnter the marks of Physics:");
	scanf("%f",&phy);
	printf("\nEnter the marks of Mathematics:");
	scanf("%f",&math);
	total=eng+hin+mar+phy+math;
	printf("\nTotal of all marks=%f",total);
	per=total/500*100;
	printf("\nPercentage=%f",per);
	getch();
}