/* 
 * Filename: hash.c
 * Author: Sixian Cao
 * UserId: cs30s121ae
 * Date: 7/14/2021
 * Sources of help: C documentation, Piazza
 */

#include <string.h>
#include "pa1.h"



unsigned int hash(char *str)
{
	unsigned int hashVal = HASH_START_VAL;

	for(int i = 0; i < strlen(str); i++)
	{
		if(i%2 == 0)
		hashVal = HASH_PRIME*hashVal+ (*(str + i));
		
	}

	for(int i = 0; i < strlen(str); i++)
	{
		if(i%2 == 1)	
		hashVal = HASH_PRIME*hashVal+ (*(str + i));
		
	}
	return hashVal;
}