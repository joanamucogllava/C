/* This program initializes and manipulates an array of integers. The integers are 
   manipulated by creating two pointer arrays, one in ascending order and one in descending order. 
   Written by: Joana Mucogllava
   Date: 05/01/2017
*/

#include <stdio.h>
#include <stdlib.h>

// Global Declaration
#define MAX 10

int main()
{
// Local Declaration
	int array[MAX] = {336, 91, 160, 5, 71, 736, 225, 566, 102, 51};
	int *descending[MAX];
	int *ascending[MAX];
	
// Initialize pointer arrays
	for(int i = 0; i < MAX ; i++)
	{
		ascending[i] = &array[i];
		descending[i] = &array[MAX-(i+1)];
	}
	
// Algorithm to sort the ascending array
	for(int x = 0 ; x < MAX ; x++)
	{
		for(int y = 0 ; y < MAX-1 ; y++)
		{
			if(*ascending[y] > *ascending[y+1])
			{
				int *temp = ascending[y+1];
				ascending[y+1] = ascending[y];
				ascending[y] = temp;
			}
		}
	}
	
// Create descending array, which is a reversed ascending array.
	for(int z = 0 ; z < MAX ; z++)
	{
		descending[MAX-(z+1)] = ascending[z];
	}
	
// Formatting the output
	printf("Ascending \t Original \t Descending\n");
	
	
// Print vertical lists of 3 arrays
	for(int i = 0; i < MAX ; i++)
	{
		printf("%d \t\t %d \t\t %d \n" ,*ascending[i] , array[i] ,  *descending[i]);
	}
	
	return 0;
}
