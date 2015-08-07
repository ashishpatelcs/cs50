/*
 * Author : Ashish Patel
 * Date : 07/08/2015
 *
 * This program prints the numbers from 1 to 100.
 * But for multiples of three prints "Fizz" instead
 * of the number and for the multiples of five
 * prints "Buzz". For numbers which are multiples
 * of both three and five prints "FizzBuzz".
 *
 */
#include <stdio.h>

int main(void)
{
	//loops from 1 to 100
	for(int i = 1; i <= 100; i++)
	{
		//checks if the number is multiple of three
		if(i % 3 == 0)
		{
			//checks to see if also a multiple of five
			if(i % 5 == 0)
			{
				printf("FizzBuzz\n");
				continue;
			}
			printf("Fizz\n");
			continue;
		}
		//checks if the number is multiple of five
		if(i % 5 == 0)
		{
			printf("Buzz\n");
			continue;
		}
		printf("%d\n", i);
	}
}
