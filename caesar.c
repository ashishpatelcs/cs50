/**
 *
 * caesar
 *
 * Ashish Patel
 * ashish.tripleclicks@gmail.com
 *
 * cs50 problem set 2
 * this program encrypts messages using Caesar's cipher
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
	// if none or more than one commandline input
	if(argc!=2)
	{
		printf("Usage: ./caesar key \n");
		return 1;
	}
	
	// convert commandline input to integer
	int k = atoi(argv[1]);
	
	// prompt user to input messages
	string msg;
	msg = GetString();
	
	// encrypt and print the message using given key
	for (int i = 0, n = strlen(msg); i < n; i++)
	{
		if (islower(msg[i]))
		{
			int m = ((((int)msg[i] - 97) + k) % 26);
			char newLChar = (char)(97 + m);
			printf("%c", newLChar);
		}
		else if (isupper(msg[i]))
		{
			int j = ((((int)msg[i] - 65) + k) % 26);
			char newUChar = (char)(65 + j);
			printf("%c", newUChar);
		}
		else if (isdigit(msg[i]))
		{
			printf("%c", msg[i]);
		}
		else if (isblank(msg[i]))
		{
			printf(" ");
		}
		else if (ispunct(msg[i]))
		{
			printf("%c", msg[i]);
		}
	}
	
	// lets print a new line
	printf("\n");
	
	// if all goes fine
	return 0;
}