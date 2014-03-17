#include<stdio.h>
#include<stdlib.h>
#include"fooSort.h"

int FooSort( struct Librery *pbook, int size  )

{
    int n;
    if( pbook == ZERO || size <= 0 )
    {
        n = -1;
        puts( "Warning!!! Application doesn't use normally memory or index your database. Please restart application for normally work!" );
        return n;
    }

    else if( pbook != ZERO )
    {

        int m, i;
        struct Librery temp;

        for( n = 1; n != size; ++n)
        {
            for ( m = 0; m != size - n; ++m )
            {

                for( i = 0; ((pbook + m)->surname[i]) < ( (pbook + m + 1) -> surname[i] ); )
                {
                            temp = *(pbook + m );
                            *(pbook+m) = *(pbook+m+1);
                            *(pbook+m) = temp;
                }

            }

        }
    }
    return n;
}
