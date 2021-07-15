/*
 * Filename: testhash
 * Author: Sixian Cao
 * Userid: cs30s121ae
 * Description: Unit test program to test the function hash().
 * Date: 07/14/2021
 * Sources of Help: C primer
 */

#include <string.h>
#include <stdlib.h>

#include "test.h"    /* For TEST() macro and stdio.h */
#include "pa1.h"

void testhash() {

  TEST( hash( "abc" ) == 693737 );
  TEST( hash( "paul" ) == 26452777 );
  TEST( hash("") == 11);
  TEST( hash("p") == 519);
  TEST( hash("1") == 456);
  TEST( hash("1a") == 16969); 

}

/* 
 * Function Name: main()
 * Function prototype: int main();
 * Description: The test driver. Runs specified tests.
 * Side Effects: None
 * Error Conditions: None
 * Return Value: 0 on exit success.
 */
int main() {
  fprintf( stderr, "Testing hash...\n\n" );
  testhash();
  fprintf( stderr, "\nDone running tests.\n" );
  return 0;
}
