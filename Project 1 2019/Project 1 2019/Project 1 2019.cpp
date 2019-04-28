// C3258834 - Cameron Down
// Programming assignment 1

#include "pch.h"
#include <math.h>
#include <string>
#include <iostream>
#include <stdio.h>


double ENCroCipher();
double DECroCipher();


int main()
{
	/*
	Variable description:
	int- "x" used for choice selection, "cr" used for rotation cipher.



	*/

	// variable declaring
	int x, cr; 
	//char str[30];
	
	printf("ENGG1003 Project 1\nC3258834 - Cameron Down\n");
	printf("--------------------------------------------\n");
	printf("English Text Ciphers\n");
	printf("--------------------------------------------\n");
	// User input display
	printf("Choose your input method: \n 1 - Hard code sample\n 2 - Type your own message\n 3 - Read from file\n");

	scanf_s("%d", &x);
	if (x >= 4)
	{
		printf("Please enter 1, 2 or 3\n");
		scanf_s("%d", &x);
	}
		else if (x = 1)
	//Section I (Hard code process)
	{

		printf("\n--------------------------------------------\n");
		printf("\n>>> READING HARD CODE SAMPLE\n");
	
		return (0);
	} 

	if (x = 2)
	//Section II (User input process)
	{
		
		printf("\n--------------------------------------------\n");
		printf("\n>>> READING FROM USER INPUT\nPlease type message below:\n");
		//scanf_s("%s", str);

		printf("Would you like to use?\n 1 - Rotation cipher\n 2 - Substitution cipher\n");
	
		scanf_s("%d", &x);
		if (x >= 3)
		{
			printf("Please enter 1 or 2\n");
			scanf_s("%d", &x);
		}
		if (x = 1)
		{
			//Rotation Cipher output
			printf("Enter rotation amount:\n");
			// scan amount as x
			scanf_s("%d", &cr);

			if (cr >= 26)
			{
				printf("Please enter a number up to 25\n");
				scanf_s("%d", &cr);
			}
			//printf("%d", cr);
			// function call






			printf(">>> ENCRYPTED\n");
			// print enncrypted output 
			return (0);
		}
		
		// if 2
		{

		}

		printf("\n--------------------------------------------\n");
	}


	/*
	if (x = 3)
	//Section III (file reading processes)
	{
	
	printf("\n--------------------------------------------\n");
	printf("\n>>> READING FILE");
	int a;
	scanf("%d", &a);
	printf(">>> FILE FOUND\n%d", a);
	
	printf("\n--------------------------------------------\n");
	
	
		return (0);
	}
	*/


	/*
	std::string userInput;
	scanf(userInput);
	*/

	// Declaring alphabetical array in LOWER case format
	char lwrCase[][25] = { "a", "b", "c", "d", "e", "f", "g", "h","I", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };

	// Declaring alphabetical array in UPPER case format
	char uprCase[][25] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };

	//printf("Character =\t%s \n", lwrCase[0]);
	//printf("Character =\t%s \n", uprCase[0]);
	


	
	/*
	for (i = 0; str[i] != 0; i++)
		if (str[i] <= 'z' && str[i] >= 'a')
			srt[i] -= 32;
	*/

	return (0);
}


// Rotation cipher encryption 
double ENCroCipher;
{
	char result;



	return result;
}

// Rotation cipher decryption 
double DECroCipher;
{


}


// Substitution cipher encryption
double ENCsubCipher;
{

}
// Substitution cipher decryption
double DECsubCipher;
{

}

//decrpyption with rotation cipher using text only

// decryption with substitution cipher given text only










// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
