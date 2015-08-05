/**
 *
 * greedy.c
 *
 * Ashish Patel
 * ashish.tripleclicks@gmail.com
 *
 * CS50 problem set 1
 * greedy algorithms finds minimum number of coins to make change
 *
 */
 
 #include <stdio.h>
 #include <math.h>
 #include "cs50.h"
 
 int main(void)
 {
	 float n;
	 int count = 0, amount;
	 
	 // prompts user for amount owed and validates input
	 do
	 {
		 printf("How much change is owed?\n");
		 n = GetFloat();
	 }
	 while (n < 0);
	 
	 
	// convert input into cents
	 n *= 100.0;
	 amount = (int) round(n);
	 
	 // while quarter can be used
	 while (amount >= 25)
	 {
		 count++;
		 amount -= 25;
	 }
	 
	 // while dimes can be used
	 while (amount >= 10)
	 {
		 count++;
		 amount -= 10;
	 }
	 
	 // while nickels can be used
	 while (amount >= 5)
	 {
		 count++;
		 amount -= 5;
	 }
	 
	 // while pennies can be used
	 while (amount >= 1)
	 {
		 count++;
		 amount -= 1;
	 }
	 
	 // prints the minimum number of coins for change
	 printf("%d", count);
	 
	 return 0;
 }