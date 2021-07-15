/* 
 * Filename: prependNode.c
 * Author: Sixian Cao
 * UserId: cs30s121ae
 * Date: 7/14/2021
 * Sources of help: C documentation, Piazza
 */

#include <string.h>
#include "pa1.h"


void prependNode( linkedListNode_t ** head, char * str )
{
    linkedListNode_t * newnode = newLinkedListNode();
    char * copy = strcp(str);
    newnode->value = copy;
    newnode->next = *head;
    *head = newnode;
}