/* This program creates a costumer's bill for a company. 
	This company sells only five different products: TV, DVD Player, Game Controller, Game Console, and Cell Phone.
	The unit prices are $425.00, $150.00, $53.25, $200.00, and $175.00 respectively. The program must read 
	the quantity of each piece of equipment purchased from the keyboard. It than calculates the cost of each item,
	the subtotal and the total cost after an 8.25% sales tax.
      Written by: Joana Mucogllava
      Date: 02/12/2017
*/
#include <stdio.h>

#define TAX_RATE                    8.25
#define TV_UNIT_PRICE     	  	    425.00
#define DVD_PLAYER_UNIT_PRICE       150.00
#define GAME_CONTROLLER_UNIT_PRICE  53.25
#define GAME_CONSOLE_UNIT_PRICE     200.00
#define CELL_PHONE_UNIT_PRICE       175.00

int main (void)   
{
// Local Declerations
int		TV;
int		DVD_Player;
int		Game_Controller;
int		Game_Console;
int		Cell_Phone;

float   TV_PRICE;
float   DVD_Player_PRICE;
float   Game_Controller_PRICE;
float   Game_Console_PRICE;
float   Cell_Phone_PRICE;

float   SUBTOTAL;
float   TAX; 
float   TOTAL;

// Statements
   printf("How many TVs were sold?: ");
   scanf ("%d", &TV);
   
   printf("How many DVD Players were sold?: ");
   scanf ("%d", &DVD_Player);
   
   printf("How many Game Controllers were sold?: ");
   scanf ("%d", &Game_Controller);
   
   printf("How many Game Consoles were sold?: ");
   scanf ("%d", &Game_Console);
   
   printf("How many Cell Phones were sold?: ");
   scanf ("%d", &Cell_Phone);
   
   TV_PRICE = TV*TV_UNIT_PRICE;
   DVD_Player_PRICE = DVD_Player*DVD_PLAYER_UNIT_PRICE;
   Game_Controller_PRICE = Game_Controller*GAME_CONTROLLER_UNIT_PRICE;
   Game_Console_PRICE = Game_Console*GAME_CONSOLE_UNIT_PRICE;
   Cell_Phone_PRICE = Cell_Phone*CELL_PHONE_UNIT_PRICE;
   
   SUBTOTAL = TV_PRICE + DVD_Player_PRICE + Game_Controller_PRICE + Game_Console_PRICE + Cell_Phone_PRICE;
   TAX      = SUBTOTAL * TAX_RATE;
   TOTAL    = SUBTOTAL + TAX;
   
   printf("QTY	  DESCRIPTION     UNIT PRICE         TOTAL PRICE \n");
   printf("--------------------------------------------------------\n");
   printf("%2d\t  TV                 $425.00          %10.2f\n" , TV, TV_PRICE);
   printf("%2d\t  DVD Player         $150.00          %10.2f\n" , DVD_Player, DVD_Player_PRICE);
   printf("%2d\t  Game Controller     $53.25          %10.2f\n" , Game_Controller, Game_Controller_PRICE);
   printf("%2d\t  Game Console       $200.00          %10.2f\n" , Game_Console, Game_Console_PRICE);
   printf("%2d\t  Cell Phone         $175.00          %10.2f\n" , Cell_Phone, Cell_Phone_PRICE);
   
   printf("                                  ---------------------- \n");
   printf("                       SUBTOTAL               %10.2f\n",  SUBTOTAL  );
   printf("                       TAX                    %10.2f\n",  TAX       );
   printf("                       TOTAL                  %10.2f\n",  TOTAL     );
           
   return 0;
} // Main





