#include<stdio.h>
#include"fooSort.h"

int FooSort( struct Librery *pbook )

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
        printf("SORT");
    }
    return i;
}
