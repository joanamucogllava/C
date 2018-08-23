/* This program is created to calculate the change due a costumer by denomintion;
   that is, how many $20 (twenties) bills, $10 (tens) bills, $5 (fives) bills, $1 (ones) bills,
   quarters, dimes, nickles, and pennies are needet in change.
   Written by: Joana Mucogllava
   Date: 03/20/2017
*/

#include <stdio.h>
// Function Decleration
int funcTwenties(float);
int funcTens(float);
int funcFives(float);
int funcOnes(float);
int funcQuarters(float);
int funcDimes(float);
int funcNickels(float);
int funcPennies(float);

int main (void) {
// Local Declaration
	float money_paid;
	float purchase_price;
	float change_due;
	int quantity_x;
// Statements
	printf("\nMoney paid by costumers in dollar ($):  ");
	scanf ("%f", &money_paid);
	printf("\nCost of purchase item in dollar ($): ");
	scanf ("%f", &purchase_price);

	change_due = money_paid-purchase_price;
	printf("Change due is: %.2f\n", change_due);

	quantity_x=0;
	if (change_due/20>0)
	 {
		quantity_x=funcTwenties (change_due);
		change_due-=quantity_x*20;
	}
	printf("$20: %d\n", quantity_x);

	quantity_x=0;
	if (change_due/10>0) 
	{
		quantity_x=funcTens (change_due);
		change_due-=quantity_x*10;
	}
	printf("$10: %d\n", quantity_x);

	quantity_x=0;
	if (change_due/5>0) 
	{
		quantity_x=funcFives (change_due);
		change_due-=quantity_x*5;
	}
	printf("$5: %d\n", quantity_x);

	quantity_x=0;
	if (change_due/1>0) 
	{
		quantity_x=funcOnes (change_due);
		change_due-=quantity_x*1;
	}
	printf("$1: %d\n", quantity_x);

	quantity_x=0;
	if (change_due/0.25>0) 
	{
		quantity_x=funcQuarters (change_due);
		change_due-=quantity_x*0.25;
	}
	printf("$0.25: %d\n", quantity_x);

	quantity_x=0;
	if (change_due/0.10>0);
	{
		quantity_x=funcDimes (change_due);
		change_due-=quantity_x*0.10;
	}
	printf("$0.10: %d\n", quantity_x);

	quantity_x=0;
	if (change_due/0.05>0) 
	{
		quantity_x=funcNickels (change_due);
		change_due-=quantity_x*0.05;
	}
	printf("$0.05: %d\n", quantity_x);

	quantity_x=0;
	if (change_due/0.01>0) 
	{
		quantity_x=funcPennies (change_due);
		change_due-=quantity_x*0.01;
	}
	printf("$0.01: %d\n", quantity_x);

	return 0;
}// main

int funcTwenties(float due) 
{
	return due/20;
}
int funcTens(float due) 
{
	return due/10;
}
int funcFives(float due) 
{
	return due/5;
}
int funcOnes(float due) 
{
	return due/1;
}
int funcQuarters(float due) 
{
	return due/0.25;
}
int funcDimes(float due) 
{
	return due/0.10;
}
int funcNickels(float due) 
{
	return due/0.05;
}
int funcPennies(float due) 
{
	return due/0.01;
}
