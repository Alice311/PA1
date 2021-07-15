/* 
 * Filename: spamFilter.c
 * Author: Sixian Cao
 * UserId: cs30s121ae
 * Date: 7/14/2021
 * Sources of help: C documentation, Piazza, Textbook (Harris)
 */

#include "pa1.h"
#include "pa1Strings.h"
#include <getopt.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    
 int tf = 0;
 if(argc<2 )
	tf = 1;
 if(argc>3)
	tf = 1;

 if(tf == 1)
    {
        fprintf(stderr, "%s", INVALID_ARGS);
        fprintf(stderr, "%s", SHORT_USAGE);
        return EXIT_FAILURE;
    }
   

    FILE *fp;  
    
    opterr = 0;
    int ch;

   while((ch = getopt(argc,argv,FLAGS))!=-1)
   {
    fp = fopen(optarg, "r");
    switch(ch)
    {
      case HELP_FLAG:
        fprintf(stdout, "%s", LONG_USAGE);
        return 0;
        break;

      case INFILE_FLAG:
	if(fp== NULL){
	perror(FILTER_ERR);
   	fprintf(stderr, "%s", SHORT_USAGE);
	return 1;}
        break;
    
      default:
        fprintf(stderr, "%s", LONG_USAGE);
        return 1;
	break;
    }
}
	
    linkedListNode_t **hashtbl = newLinkedListArray(DEFAULT_SIZE);
  
    populateTable(hashtbl, fp);
    fclose(fp);

    launchUserQuery(hashtbl);

    cleanup(hashtbl);
    return 0;
}
