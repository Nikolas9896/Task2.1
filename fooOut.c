#include<stdio.h>
#include"fooOut.h"
#define YEAR_FILTER 1970
int FooOut( struct Librery *pbook )

{
  int i;
  if( pbook == ZERO )
  {
      i = -1;
      puts( "Warning!!! Application doesn't use normally memory. Please restart application for normally work!" );
      return i;
  }

  else if( pbook != ZERO )
  {
      puts( "Books are in alfabetic numeration which aren't oldest of 1970\n" );
      for( i = ZERO; i != KILK4; ++i )
      {
            pbook -> num = i+ONE;
            if( (pbook -> year) >= YEAR_FILTER )
            {
                printf("%d. %s %s\t\" %s \"\t %u \tcomment: %s \n", pbook -> num,\
                                                                    pbook -> surname,\
                                                                    pbook -> name,\
                                                                    pbook -> book_name,\
                                                                    pbook -> year,\
                                                                    pbook -> comment);
             }
             ++pbook;

        }
   }
  return i;
}
