/* 
 * Filename: checkTable.c
 * Author: Sixian Cao
 * UserId: cs30s121ae
 * Date: 7/14/2021
 * Sources of help: C documentation, Piazza
 */

#include "pa1.h"


int checkTable( char * str, linkedListNode_t ** hashtbl )
{
    if(hashtbl !=NULL){
    linkedListNode_t * linked_List = retrieveLinkedList(hashtbl, str);
  
    if(linked_List != NULL ){
       
    do
    {
        if(strcmp(linked_List->value, str) == 0)
            return 1;
      	else
        linked_List = linked_List->next;
        
    }while(linked_List!=NULL);
    }
    }
    return 0;
}