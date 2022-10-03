#include "main.h"

/**
 * *leet - encodes a string into 1337.letters a and A are replacLetters e and
 * *@s: pointer 
 * Return: pointer to s.
 */

char *leet(char *s)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

				/*  scan through string */
					stringCount = 0;
						while (s[stringCount] != '\0')
							/* check whether leetLetter is found */
								{
									leetCount = 0;

									while (leetCount < 10)														{

									if (leetLetters[leetCount] == s[stringCount])
									{
																						s[stringCount] = leetNums[leetCount];													}
																							leetCount++;
							}

				
									stringCount++;
								}
						return (s)
}

