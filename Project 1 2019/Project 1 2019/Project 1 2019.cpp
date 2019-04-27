// Project 1 2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <math.h>
#include <string>
#include <iostream>


int main()
{
	int x;
	
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
	printf("%d", x);


	//Section I (Hard code process)
	{
	printf("\n>>> READING HARD CODE SAMPLE\n");
	
	
	} 


	//Section II (User input process)
	{
		printf("\nPlease type message below:\n");

		printf("Would you like to use?\n 1 - Rotation cipher\n 2 - Substitution cipher");
		// scan for 1 or 2
		// if 1
		{
			//Rotation Cipher output
			printf("Enter rotation amount:");
			// scan amount as x
			// function call
			printf(">>> ENCRYPTED");
			// print output 
		}
		
		// if 2
		{

		}
	}


	/*//Section III (file reading processes)
	{
	printf("\n>>> READING FILE");
	int a;
	scanf("%d", &a);
	printf(">>> FILE FOUND\n%d", a);
	
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


// Rotation cipher decryption 



// Substitution cipher encryption

// Substitution cipher decryption


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
