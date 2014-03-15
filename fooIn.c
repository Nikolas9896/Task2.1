#include<stdio.h>
#include"fooIn.h"

 int fooIn( struct Librery *pbook )

{   int i;

    if( pbook == ZERO )
    {
        i = -1;
        puts( "Warning!!! Application doesn't use normally memory. Please restart application for normally work!" );
        return i;
    }
    else if( pbook != ZERO )
    {

        for( i = ZERO; i != KILK4; ++i )

        {
         /* Number */
            pbook->num = i + ONE;

        /* Autor */

                 printf("Please, enter autor name and surname for %d book :\n", pbook -> num );
                 scanf( "%s %s", pbook -> name, pbook -> surname );
                 scanf( "%*c" );

         /* Book */
          printf( "Enter book which wrote %s %s :",  pbook -> name, pbook -> surname  );
          scanf("%[^\n]", pbook -> book_name );
          scanf( "%*c" );
          printf("%s\n", pbook -> book_name );


         /* Year of creation */

             while ( ( pbook->year > FUTURE ) || ( pbook->year <= OLD ) )

                {

                  printf("Enter year creation of book : \n");
                  scanf("%u", &(*pbook).year);
                  scanf( "%*c" );
                  printf("Year: %u\n", pbook -> year);

                }

         /* Comment about book */
          printf("Enter your coment : \n");
          scanf( "%[^\n]", pbook -> comment );
          scanf( "%*c" );
          printf( "%s\n", pbook -> comment );

          /* next one */
         ++pbook;
        }
    }
 return i;
}
