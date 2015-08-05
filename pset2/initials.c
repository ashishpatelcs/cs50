/**
 *
 * initials.c
 * 
 * Ashish Patel
 * ashish.tripleclicks@gmail.com
 *
 * cs50 problem set 2
 * Outputs the initials in uppercase
 *
 */
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	// prompt user for name
	string name;
	name = GetString();
	
	// prints initials in uppercase
	printf("%c", toupper(name[0]));
	for (int i = 0, n = strlen(name); i < n; i++)
	{
		if (name[i] == ' ' && name[i] != '\0')
			printf("%c", toupper(name[i + 1]));
	}
	
	// print a new line after initials
	printf("\n");
	
	return 0;
}
