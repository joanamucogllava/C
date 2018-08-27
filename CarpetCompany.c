/* This program will creat cusmtomers' bills for a carpet company
   which will sell 0.55$ per foot square each.
	  Written by: Joana Mucogllava
      Date: 02/26/2017
*/

#include <stdio.h>	
#define LABOR               0.55
#define TAX_RATE            8.5


void GetData(int* Length, int* Width, int* Customer_Discount, float* Cost_per_square);
void CalculateValues(	int Length, int Width, int* Area, float Cost_per_square, int Customer_Discount, float* Total_Carpet_Cost, float* Total_Labor_Cost, float* Install_Price, float* Total_Discount, float* Subtotal, float* Total_Tax, float* Total_Price);
void InstalledPrice(int Length, int Width, int Cost_per_square, int*Area, float* Total_Carpet_Cost, float* Total_Labor_Cost, float* Install_Price);
void SUBTOTAL(int Customer_Discount, float* Install_Price, float* Total_Discount, float* Subtotal);
void TotalPrice(float* Subtotal, float* Total_Tax, float* Total_Price);


void PrintResults(int Length, int Width, int Area, float Cost_per_square, float Total_Carpet_Cost, float Total_Labor_Cost, float Install_Price, float Customer_Discount, 
float Total_Discount, float Subtotal, float Total_Tax, float Total_Price);
void Measurments(int Length, int Width, int Area);
void Charges (float Cost_per_square, float Total_Carpet_Cost, float Total_Labor_Cost, float Install_Price, int Customer_Discount, float Total_Discount,
float Subtotal, float Total_Tax, float Total_Price);



int main (void)
{
// local declarations
	int Length;
	int Width;
	int Area;
	float Cost_per_square;
	int Customer_Discount;
	float Total_Carpet_Cost;
	float Total_Labor_Cost;
	float Install_Price;
	float Total_Discount;
	float Subtotal;
	float Total_Tax;
	float Total_Price;
	
	GetData(&Length, &Width, &Customer_Discount, &Cost_per_square);
	
	CalculateValues( Length,  Width,  &Area, Cost_per_square,  Customer_Discount, &Total_Carpet_Cost, &Total_Labor_Cost,  &Install_Price,  &Total_Discount,  &Subtotal,  &Total_Tax,  &Total_Price);
	
	PrintResults(Length, Width, Area,  Cost_per_square,  Total_Carpet_Cost,  Total_Labor_Cost,  Install_Price, Customer_Discount, 

    Total_Discount,  Subtotal,  Total_Tax, Total_Price);
	return 0;		
}

/* ======================= getData ==========================
   It will read data from the keybord
*/
	
    void GetData(int* Length, int* Width, int* Customer_Discount, float* Cost_per_square)
{
// Statements
	printf("Length of room (feet)?       ");
	scanf("%d", Length);
	printf("Width of room(feet)?         ");
	scanf("%d", Width);
	printf("Customer discount(percent)?   "); 
	scanf("%d", Customer_Discount);
	printf("Cost per square foot($0.55)?  ");
	scanf("%f", Cost_per_square);	
	return;
}// getData

/* ============================ CalculateValue =========================
   It will calculate the values
*/
   void CalculateValues(	int Length, int Width, int* Area, float Cost_per_square, int Customer_Discount, float* Total_Carpet_Cost, 
   float* Total_Labor_Cost, float* Install_Price, float* Total_Discount, float* Subtotal, float* Total_Tax, float* Total_Price)

{
// Statements
 InstalledPrice(Length,  Width,  Cost_per_square, Area,  Total_Carpet_Cost, Total_Labor_Cost, Install_Price);
 SUBTOTAL( Customer_Discount,  Install_Price, Total_Discount, Subtotal);
 TotalPrice(Subtotal, Total_Tax, Total_Price);
 return;
}// CaculateValue

/* =========================== InstalledPrice =============================
   Calculate area =, total carpet cost, total labor cost, installed price
*/

   void InstalledPrice(int Length, int Width, int Cost_per_square, int*Area, float* Total_Carpet_Cost, float* Total_Labor_Cost, float* Install_Price)
{
// Statements
	*Area= Length*Width;
	*Total_Carpet_Cost= *Area*Cost_per_square;
	*Total_Labor_Cost= *Area*LABOR;
	*Install_Price=*Total_Carpet_Cost+*Total_Labor_Cost;
	
	return;
}// InstalledPrice

/* ========================== SUBTOTAL =======================
   It will add up all prices
*/
    void SUBTOTAL(int Customer_Discount, float* Install_Price, float* Total_Discount, float* Subtotal)
{
// Statments
	*Total_Discount= *Install_Price*Customer_Discount/100;
	*Subtotal=*Install_Price-*Total_Discount;
	return;
}// SUBTOTAL
/* ===================== TotalPrice =======================
	It will alculate tax and adds it to subtotal
*/
	void TotalPrice(float* Subtotal, float* Total_Tax, float* Total_Price)
{
// Statments
	*Total_Tax= *Subtotal * TAX_RATE/100;
	*Total_Price= *Subtotal + *Total_Tax;
	return;
}//TotalPrice


/* ===================== PrintResult ============================
   It will show the result on the screen
*/
void PrintResults(int Length, int Width, int Area, float Cost_per_square, float Total_Carpet_Cost, float Total_Labor_Cost, float Install_Price, float Customer_Discount, 
float Total_Discount, float Subtotal, float Total_Tax, float Total_Price)

{
	//statements
	Measurments(Length,  Width, Area);
	Charges (Cost_per_square, Total_Carpet_Cost, Total_Labor_Cost, Install_Price, Customer_Discount, Total_Discount, Subtotal, Total_Tax, Total_Price);
	
	return;
// PrintResult
}
/*======================= PrintTheMeasure ============================
  It will print width, area and length
*/
    void Measurments(int Length, int Width, int Area)
{
//statements

printf("                         MEASUREMENT \n");
printf("%\tLentgh                      %10.2d ft \n ", Length);
printf("%\tWidth                       %10.2d ft \n ", Width );
printf("%\tArea                        %10.2d square ft\n\n\n ", Area);
return;
		
}
/* ============== PrintCharges ===========================
	It will print prices with tax and labor.
*/
 void Charges(float Cost_per_square, float Total_Carpet_Cost, float Total_Labor_Cost, float Install_Price, int Customer_Discount, float Total_Discount,
 float Subtotal, float Total_Tax, float Total_Price)
 
{
	//Statements
	printf("                        CHARGES \n");
	printf(" DESCRIPTION           COST/SQ.FT.              CHARGE \n");
	printf("___________________________________________________________ \n");
	printf("Carpet                 %10.2f            %\t$%7.3f \n", Cost_per_square, Total_Carpet_Cost);
	printf("Labor                  %10.2f              %\t  %7.3f \n", LABOR, Total_Labor_Cost);
	printf("                                                ___________\n");
	printf("INSTALLED PRICE                               %\t$%7.3f \n", Install_Price);
	printf("Discount                     %3d%%              %\t  %7.3f\n",Customer_Discount, Total_Discount);
	printf("                                                ___________\n");
	printf("SUBTOTAL                                     %\t$%7.3f \n", Subtotal);
	printf("Tax                                            %\t  %7.3f \n",Total_Tax);
	printf("TOTAL                                        %\t$%7.3f \n",Total_Price);
	
	return; 
} // PrintCharges


