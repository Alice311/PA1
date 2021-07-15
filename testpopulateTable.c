/*
 * Filename: testpopulateTable.c
 * uthor: Sixian Cao
 * UserId: cs30s121ae
 * Description: Unit test program to test the function hash().
 * Date: 07/15/2021
 * Sources of help: C documentation, Piazza
 */

#include <string.h>
#include <stdlib.h>

#include "test.h" /* For TEST() macro and stdio.h */
#include "pa1.h"



void empty_Test()
{
	//TEST EMPTY FILE
	linkedListNode_t ** table = newLinkedListArray(DEFAULT_SIZE);
	FILE *fp = fopen("emails/no_emails", "r");
	populateTable(table, fp);
	TEST(table[0] == NULL);
	TEST(table[1] == NULL);
	TEST(table[2] == NULL);
	TEST(table[3] == NULL);
	TEST(table[4] == NULL);
	fclose(fp);
	cleanup(table);
}

int main()
{
	empty_Test();
	return 0;
}
