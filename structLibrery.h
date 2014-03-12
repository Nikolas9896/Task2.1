#ifndef STRUCTLIBRERYh
#define STRUCTLIBRERYh 1

#define AUT_SYMB 15
#define BOO_SYMB 30
#define COMIT 300
#define KILK4 2
#define POLIV 6
#define ENTER '\n'
#define ZERO '\0'
#define ONE 1
#define OLD 1970
#define FUTURE 2015

struct Librery

	{

     unsigned int num;
     char surname [ AUT_SYMB ];
     char name [ AUT_SYMB ];
     char book_name [ BOO_SYMB ];
     unsigned int year;
     char comment [ COMIT ];

};
#endif
