/*Program for swapping of two numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("\nEnter any two numbers:");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("\nValue of a=%d",a);
	printf("\nValue of b=%d",b);
	getch();

}