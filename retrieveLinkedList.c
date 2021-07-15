/* 
 * Filename: retrieveLinkedList.c
 * Author: Sixian Cao
 * UserId: cs30s220eq
 * Date: 7/14/2021
 * Sources of help: C documentation, Piazza
 */

#include "pa1.h"


linkedListNode_t *retrieveLinkedList(linkedListNode_t ** hashtbl, char *string)
{
    return hashtbl[hash(string) % DEFAULT_SIZE];
}