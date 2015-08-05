/**
 *
 * vigenere.c
 *
 * Ashish Patel
 * ashish.tripleclicks@gmail.com
 * 
 * cs50 problem set 2
 * this program encrypts messages 
 * using vigenere's cipher.
 *
 */
 #include <stdio.h>
 #include <cs50.h>
 #include <ctype.h>
 #include <string.h>
 #include <stdlib.h>
 
 int main(int argc, string argv[])
 {
	 // validate only one argument exists
	 if (argc != 2)
	 {
		 printf("Usage: vigenere key\n");
		 return 1;
	 }
	 
	 // checks if a non-alphabetical character exists
	 string key = argv[1];
	 for (int i = 0, n = strlen(key); i < n; i++)
	 {
		 if (!isalpha(key[i]))
		 {
			 printf("Only alphabetical characters!");
		     return 1;
		 }
	 }
	 
	 // prompt user to enter the messages
	 string msg;
	 msg = GetString();
	 
	 // encrypt and prints the message using vingenere's cipher
	 for (int i = 0, j = 0, n = strlen(msg), keylen = strlen(key); i < n; i++, j++)
	 {
		 // lets re-use the key
		 if (j == keylen)
			 j = 0;
		 
		 // for all non-alphabetical characters
		 if (!isalpha(msg[i]))
		 {
			 printf("%c", msg[i]);
			 j--;
		 }
		 else
		 {
			 int newOrder = 0;
			 int charOrder = 0;
			 char newChar;
			 // if the alphabet is uppercase
			 if (isupper(msg[i]))
			 {
				 if (isupper(key[j]))
				 {
					 newOrder = (int)(key[j]) - 65;
				 }
				 else
				 {
					 newOrder = (int)(key[j]) - 97;
				 }
				 
				 charOrder = (int)(msg[i]) - 65;
				 newChar = (((charOrder + newOrder)) % 26);
				 printf("%c", newChar + 65);
			 }
			 // if the alphabet is lowercase
			 else
			 {
				 if (isupper(key[j]))
				 {
					 newOrder = (int)(key[j]) - 65;
				 }
				 else
				 {
					 newOrder = (int)(key[j]) - 97;
				 }
				 
				 charOrder = (int)(msg[i]) - 97;
				 newChar = (((charOrder + newOrder)) % 26);
				 printf("%c", newChar + 97);
			 }
		 }
	 }
	 
	 // prints a new line
	 printf("\n");
	 
	 // if all goes well
	 return 0;
 }
