/**
 * mario.c
 *
 * Ashish Patel
 * ashish.tripleclicks@gmail.com
 *
 * CS50 problem set 1
 * draws the half-pyramid using hashes(#)
 *
 */

#include <stdio.h>
#include "cs50.h"

int main(void)
{
	int height;

	// prompts user to input height and validates
	do
	{
		printf("Enter height: ");
		height = GetInt();
	}
	while (height < 0 || height > 23);

	// draws the half-pyramid
	for (int i = 0, spaces = (height - 2), hashes = 1; i < height; i++)
	{
		// prints spaces
		for (int j = 0; j <= spaces; j++)
			printf(" ");
		
		// spaces decrements
		spaces--;

		// prints hashes
		for (int k = 0; k <= hashes; k++)
			printf("#");

		// hashes increments
		hashes++;
		
		// print a new line
		printf("\n");

    }
	return 0;
}