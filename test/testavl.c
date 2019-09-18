#include "avltree.c"
#include <stdio.h>

void PrintTree( AvlTree T)  {
	if (T != NULL) {
		PrintTree (T -> Left);
    printf    ("%d\n",Retrieve (T));
		PrintTree (T -> Right);
	}
}


int main(int argc, char *argv[])  {
    AvlTree T;
    Position P;
    int i;
    int j = 0;

    T = MakeEmpty( NULL );
    for( i = 0; i < 50; i += 5 )
        T = Insert( i, T );
    /*for( i = 0; i < 50; i++ )*/
        /*if( ( P = Find( i, T ) ) == NULL || Retrieve( P ) != i )*/
           /*printf( "Error at %d\n", i );*/

 /* for( i = 0; i < 50; i += 2 )
        T = Delete( i, T );

    for( i = 1; i < 50; i += 2 )
        if( ( P = Find( i, T ) ) == NULL || Retrieve( P ) != i )
            printf( "Error at %d\n", i );
    for( i = 0; i < 50; i += 2 )
        if( ( P = Find( i, T ) ) != NULL )
            printf( "Error at %d\n", i );
*/
		PrintTree (T);

    printf( "Min is %d, Max is %d\n", Retrieve( FindMin( T ) ),
               Retrieve( FindMax( T ) ) );

    return 0;
}
