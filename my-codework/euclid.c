# cs50
problem sets and project work for CS50 at harvard
/*
 * Author: Ashish Patel
 * Date: 07/08/2015
 *
 * Euclid's algorithm for the greatest common divisor
 * (gcd) of two numbers
 *
 */
#include <stdio.h>
#include <cs50.h>

//prototype gcd
void gcd(int, int);

int main(void)
{
	int x = 0, y = 0;
	
	//input a and b
	printf("\n------------------------------------------\n");
	printf("\nEnter first number: ");
	x = GetInt();
	printf("Enter second number: ");
	y = GetInt();
	
	//call gcd
	gcd(x, y);
}

void gcd(int a, int b)
{
	//prints user inputs to the screen
	printf("------------------------------------------\n");
	printf("\nYour inputs: \n");
	printf("Number a: %d \n", a);
	printf("Number b: %d \n", b);
	printf("------------------------------------------\n");
	
	//calculate greatest common divisor for a and b
	do
	{
		if (b == 0)
		{
			printf("\nThe greatest common divisor (GCD) is: %d \n", a);
			printf("------------------------------------------\n");
			break;
		}
		
		if (a > b)
		{
			a = (a - b);
		}
		else
		{
			b = (b - a);
		}
	}
	while(b>=0);
}
