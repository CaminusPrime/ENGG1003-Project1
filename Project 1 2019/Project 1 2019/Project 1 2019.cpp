// C3258834 - Cameron Down
// Programming assignment 1

/*	
	huge comment here to outline why I'm actually using Visual studio over eclipse che plus why the late start. 
	I couldnt get che working with my github account in a friendly way (It wanted a subscription which i couldnt
	get around even after following instructions?) My solution was to double back to visual studio which I kind
	of know thanks to the past 2 years working in it and other prior courses I've done (using visual studio 2010 even!) 
	Honestly started the assignment later because over the holidays worked amped up on me, I started the exam before the holidays
	sick and that carried on for a while plus being generally exhausted, under a lot of stress from a project I somehow became
	game director on (How the actual fuck that happened IDK) which proceeded to have more drama than bold and the beautiful
	in these two weeks alone. Because of that project It was also a deciding factor for me to use and set up visual
	studio to my github because that project is also using the same setup and I would like to be more involved in
	that portion of the project. overall I feel more comfortable in VS over oGDB or Che. It was kind of daunting
	to actually get started due to the nature of the task, feeling behind and exhaustion/motivation which then
	wasnt helped by github not working with visual studio which turned out to be a simple fix. 
	Anyway heres a thing...
*/


#include "pch.h"
#include <math.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>

//#define _CRT_SECURE_NO_WARNINGS

//char ENCroCipher();
//double DECroCipher();
char capital(char c);
char rotation(char str, int x);

int main()
{
	/*
	Variable description:
	FILE operator for reading file as per section III
	int- "x" used for choice selection, "cr" used for rotation cipher.



	*/

	// variable declaring
	//FILE *input;
	int x; 
	char str[1024];
	char res[20];
	char c;
	// Hard code example
	char hdCodemsg[] = "SJSFMPCRM WG O USBWIG. PIH WT MCI XIRUS O TWGV PM WHG OPWZWHM HC QZWAP O HFSS, WH KWZZ ZWJS WHG KVCZS ZWTS PSZWSJWBU HVOH WH WG GHIDWR. - OZPSFH SWBGHSWB";

	/* 
	//Declaring alphabetical array in LOWER case format
	char lwrCase[][25] = { "a", "b", "c", "d", "e", "f", "g", "h","I", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };

	// Declaring alphabetical array in UPPER case format
	char uprCase[][25] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };
	
	//printf("Character =\t%s \n", lwrCase[0]);
	//printf("Character =\t%s \n", uprCase[0]);
	*/

	
	// Output header
	printf("ENGG1003 Project 1\nC3258834 - Cameron Down\n");
	printf("--------------------------------------------\n");
	printf("English Text Ciphers\n");
	printf("STATUS:\n>>> HARD CODE\t-\tUNFINISHED\n>>> USER INPUT\t-\tUNFINISHED\n>>> FILE READ\t-\tUNFINISHED\n");
	printf("--------------------------------------------\n");
	
	// User input display
	printf("Choose your input method: \n 1 - Hard code sample\n 2 - Type your own message\n 3 - Read from file\n");

	scanf_s("%d", &x);
	if (x >= 4)
	{
		printf("Please enter 1, 2 or 3\n");
		scanf_s("%d", &x);
	}
		
			//Section I (Hard code process)
		if (x == 1)
		{


			printf("\n--------------------------------------------\n");
			printf("\n>>> READING HARD CODE SAMPLE:\n%s\n", hdCodemsg);
			printf("Enter a number between 1 & 25 to try and decrypt this message\n");
			scanf_s("%d", &x);

			for (std::size_t i = 0; i < strlen(str); i++)
			{
					c = hdCodemsg[i];
					res[i] = capital(c);
			}
			if (x >= 26)
			{
				printf("Please enter a number up to 25\n");
				scanf_s("%d", &x);
			}

			for (std::size_t i = 0; i < strlen(str); i++)
			{
				res[i] = rotation(res[i], x);
			}

			printf("Decrypted output: %s\n", res);
			// print hard coded encrypted message
			// choose how to decrypt it, scan for user input
			// print out decoded message

			printf("\n--------------------------------------------\n");

			

		} 

	
			//Section II (User input process)
			if (x == 2)
			{
		
				printf("\n--------------------------------------------\n");
				printf("\n>>> READING FROM USER INPUT\nPlease type message:\n");
				scanf_s("%s", str, 1024);     // SCAN FUNCTION NOT WORKING, FIX HERE
				
				printf("you entered: %s\n", str);
				
				for (std::size_t i = 0; i < strlen(str); i++)
				{
					
					c = str[i];
					res[i] = capital(c);
					
					/*
					for (int i = 0; i < 1025; i++)
					{
						if (c != 13)
						{
							printf("%d", c);
						}
						else if (c == 13)
						{
							i = 10000;
						}
					}
					*/
				}

				printf("capitalised: %s\n", res); // Outputs capitalised result


				printf("Would you like to use?\n 1 - Rotation cipher\n 2 - Substitution cipher\n");
	
				scanf_s("%d", &x);
				if (x >= 3)
				{
					printf("Please enter 1 or 2\n");
					scanf_s("%d", &x);
				}
				if (x == 1)
				{
					//Rotation Cipher output
					printf("Enter rotation amount:\n");
					// scan amount as x
					scanf_s("%d", &x);

					if (x >= 26)
					{
						printf("Please enter a number up to 25\n");
						scanf_s("%d", &x);
					}
					
					for (std::size_t i = 0; i < strlen(str); i++)
					{
						res[i] = rotation(res[i], x);
					}

					printf("Enctypted output: %s\n", res);
					
			

					printf(">>> ENCRYPTED\n");
					 
					// output encrypt to file

					printf("\n--------------------------------------------\n");
					
				}
		
				if (x == 2)
				{
					//Substitution Cipher output



					printf("\n--------------------------------------------\n");
				}

				return (0);
			}



				//Section III (file reading processes)
				if (x == 3)
				{
	/*
				printf("\n--------------------------------------------\n");
				printf("\n>>> READING FILE");
				int a;

					input = fopen("input.txt", "r");

					while (feof(input) == 0)
					{
						char c;
						fscanf(input, "%c", &c);
						printf("%c", c);
					}
					if (input == NULL) 
					{
						perror("fopen()");
						return;
					}


				scanf("%d", &a);

				printf(">>> FILE FOUND\n%d\n>>> FILE READ", a);

	



				printf("\n--------------------------------------------\n");
	*/
	
					
				}
				


	/*
	std::string userInput;
	scanf(userInput);
	*/

	


	
	/*
	for (i = 0; str[i] != 0; i++)
		if (str[i] <= 'z' && str[i] >= 'a')
			srt[i] -= 32;
	*/

	return 0;
}







/* Copy paste s***:
	printf("\n--------------------------------------------\n");
*/

// Functions



// function for reading and converting to captials 
char capital(char c)
{
	if ((c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126)) // returning non letter outputs
	{
		//printf("%c", c);
		return c;
	}
	else if (c >= 97 && c <= 122)
	{
		//printf("lower case letter detected\n"); // used for testing
		c -= 32; // this captializes the letter using ASCII
		return c;
	}
}





// Rotation cipher for encrypting
char rotation(char c, int x)
{
	char r;
	r = c + x;
	if ((c >= 32 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126)) // returning non letter outputs
	{
		//printf("%c", c);
		return c;
	}
	if (r >= 91)
	{
		int e;
		e = (x + c) - 91;
		r = 65 + e;
	}
	if (r <= 64)
	{
		int e;
		e = (x + c) - 65;
		r = 91 + e;
	}

	//printf("value of rotation = %c // %d", r, r);

	return r;
}

/*


// Rotation cipher encryption 
char ENCroCipher ()
{
	char result;

	char c, r;
	char str[1024];
	int x;
	   printf("enter rotation amount : \n");
	scanf("%d", &x);
		r = c + x;
	if(r >= 91)
	{
	  int e;
	  e = (x + c) - 91;
	  r = 65 + e;
	}
	if(r <= 64)
	{
	  int e;
	  e = (x + c) - 65;
	  r = 91 + e;
	}
	printf("value of rotation = %c // %d", r, r);



  // Random number generator
  srand(time(NULL));
	printf("Rotation:");
	for(int i = 0; i < 1; i++)
	{
		r = rand() % 25;
		printf("%d ",r);
	}




	return result;
}

// Rotation cipher decryption 
double DECroCipher ()
{


}


// Substitution cipher encryption
double ENCsubCipher ()
{

}
// Substitution cipher decryption
double DECsubCipher ()
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
*/