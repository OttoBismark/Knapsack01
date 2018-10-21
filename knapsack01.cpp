#include <iostream>

/*
*********************************************************
*                                                       *
*                Knapsack 0\1 problem                   *
*                   by Otto Bismark                     *
*                                                       *
*                                                       *
*                                                       *
*********************************************************
*/

/*
" KNAPSACKDP function"

This function apply the dynamic programming to resolve the knapsack 0-1 problem
We want to fill all the knapsack and taking back the maximum value using a
"look-up table" to find the maximum value of all item into the bag

*/
int knapsackDP(int itemValue[], int itemWeight[], int size, int maxCapacity);


/*

"MAX function to find the max between "a" and "b" values

*/
int max(int, int);

/*

Main program

*/
int main()
{
	/* Number of item = 4 */
	int n = 4;
	/* Max number of items into the knapsack = 8 */
	int maxSize = 8;
	/* Array of single item value */
	int itemValue[n] = {15, 10, 9, 5};
	/* Array of single item weight */
	int itemWeight[n] = {1, 5, 3, 4};
	/* Variable who recive the max value from the knapsack function */
	int maxValue = 0;

	/*Calling the function to take the max value */
	maxValue = knapsackDP(itemValue, itemWeight, n, maxSize);

	std::cout << "\n\nMax value of knapsack 0 - 1 is -> " << maxValue << std::endl;
	std::cout << maxValue << std::endl;
}

/*

function KNAPSACKDP.

This function use the dynamic programming to resolve the knapsack 0-1 problem
*/
int knapsackDP(int itemValue[], int itemWeight[], int size, int maxCapacity)
{
	int N = size+1;
	int M = maxCapacity+1;
	/*Table of dimension size+1 (number of items) rows and maxCapacity (of knapsack) + 1*/
	int DPTable[N][M];

	/* Prepare the look-up table with all zeros on in */
	for(short int i = 0; i <= size; i++)
	{
		for(short int j = 0; j <= maxCapacity; j++)
		{
			DPTable[i][j] = 0;
		}
	}

	
	for(short int k = 1; k <= N; k++)
	{
		for(short int g = 0; g < M; g++)
		{
			/*
			
			If the weight is greather than g, take the item
			on k-1 row into the table
			
			*/
			if(itemWeight[k-1] > g)
			{
				DPTable[k][g] = DPTable[k-1][g];
			}
			else
			{
				/*
				
				Otherwise:
				find the max value between k-1 item in the table
				and the kth item to push into the knapsack
				
				*/
				int a = (itemValue[k-1] + DPTable[k-1][g-itemWeight[k-1]]);
				int b = (DPTable[k-1][g]);
				DPTable[k][g] = max(a, b);
			}
		}
	}

	/*
	
	Print the finished table
	
	*/
	for(short int k = 0; k <= size; k++)
	{
		for(short int g = 0; g <= maxCapacity; g++)
		{
			std::cout << DPTable[k][g] << " ";
		}
		std::cout<< std::endl;
	}

	/*
	Return the max value of the knapsack 
	*/
	return DPTable[size][maxCapacity];
}

/*

Function that determinate the max value between "a" and "b"

*/
int max(int a, int b)
{
	return a>b? a:b;
}

/*

N.B.

Using the dynamic programming the time complexity is = O(n*K)

*/
