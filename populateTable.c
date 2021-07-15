/* 
 * Filename: populateTable.c
 * Author: Sixian Cao
 * UserId: cs30s121ae
 * Date: 7/14/2021
 * Sources of help: C documentation, Piazza
 */

#include "pa1.h"
#include <string.h>


void populateTable( linkedListNode_t ** hashtbl, FILE * dataFile )
{
    char string[256];

    while(1)
    {
	if(fgets(string, sizeof(string), dataFile)){
      
        char * newline = strchr(string, '\n'); 

        if(newline != NULL)
            *newline = '\0';

      	int i=0;
	while(i< string[i]){
       	string[i] = tolower(string[i]);
	i++;
	}

        llTableAddString(hashtbl, string);
   	 }
	else
		break;
	}

}