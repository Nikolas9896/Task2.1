#include<stdio.h>
#include"fooOut.h"

 int fooOut( struct Librery *pbook )

{
  int i;
  printf("Books in alfabetic numeretion\n");
    for( i = ZERO; i != KILK4; ++i )

    {

        printf("%d. %s %s\t\" %s \"\t %u \tcomment: %s \n", pbook -> num,\
                                                       pbook -> surname,\
                                                       pbook -> name,\
                                                       pbook -> book_name,\
                                                       pbook -> year,\
                                                       pbook -> comment);
            ++pbook;

    }
	return 1;
}
