#include<stdio.h>
#include"fooIn.h"
int Checking();

int FooIn( struct Librery *pbook )

{   int i;
    int ind = 1;

    if( pbook == ZERO )
    {
        i = -1;
        puts( "Warning!!! Application doesn't use normally memory. Please restart application for normally work!" );
        return i;
    }
    else if( pbook != ZERO )
    {
        LINE
        puts("\t- Welcome! - To the \"Library\" system");
        LINE
        for( i = ZERO; i != KILK4; ++i )
        {
            /* Autor Name*/
            while( ind )
            {
                puts( "Please, enter autor's name:" );
                scanf( "%s", pbook -> name );
                ind = Checking();
                LINE
            }
            ++ind;
            /* Autor Surname */
            while( ind )
            {
                puts( "Please, enter autor's surname:" );
                scanf( "%s", pbook -> surname );
                ind = Checking();
                LINE
            }
            ++ind;
            /* Book */
            printf( "Enter book which wrote %s %s :\n",  pbook -> name, pbook -> surname  );
            scanf("%[^\n]", pbook -> book_name );
            scanf( "%*c" );
            LINE
            /* Year of creation */
            while ( ( pbook->year > FUTURE ) || ( pbook->year <= OLD ) )
            {
                printf("Enter year creation of book( from 500 to 2014 ) : \n");
                scanf("%u", &(*pbook).year);
                scanf( "%*c" );
                printf("Year: %u\n", pbook -> year);
            }
            LINE
            /* Comment about book */
            printf("Enter your coment : \n");
            scanf( "%[^\n]", pbook -> comment );
            scanf( "%*c" );
            LINE
            /* next one */
            ++pbook;
        }
    }
    return i;
}

int Checking()
{
    char ch;
    int ind = 1;
    while( ch != '\n' )
    {
        ch = getchar();
        /* discard */
        --ind;
    }
    if( ind < 0 )
    {
        puts( "\nWarning! Please, Try again but, only one word!" );
        return ind;
    }
    else
    {
        return ind;
    }
}
