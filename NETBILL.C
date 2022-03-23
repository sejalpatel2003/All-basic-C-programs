/*Program to calculate netbill*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float price,qty,bill=0.0,discount=0.0,netbill=0.0;
	clrscr();
	printf("\nEnter the Ice-cream Price:");
	scanf("%f",&price);
	printf("\nEnter the Quantity:");
	scanf("%f",&qty);
	bill=price*qty;
	printf("\nBill=%f",bill);
	discount=bill * 0.15;
	printf("\nDiscount=%f",discount);
	netbill=bill - discount;
	printf("\nNet Bill=%f",netbill);
	getch();
}