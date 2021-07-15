/* 
 * Filename: llTableAddString.c
 * Author: Sixian Cao
 * UserId: cs30s220eq
 * Date: 7/14/2021
 * Sources of help: C documentation, Piazza
 */

#include "pa1.h"


void llTableAddString( linkedListNode_t ** hashtbl, char *string )
{

    prependNode(&hashtbl[hash(string) % DEFAULT_SIZE], string);
}