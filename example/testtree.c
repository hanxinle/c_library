#include "tree.c"
#include <stdio.h>

int main( )
{
  SearchTree T;
  Position P;
  int i;
  int j = 0;

  T = MakeEmpty( NULL );
  for( i = 0; i < 50; i++, j = ( j + 7 ) % 50 )
    T = Insert( j, T );

  PrintTree(T);

  for( i = 0; i < 50; i++ )
    if( ( P = Find( i, T ) ) == NULL || Retrieve( P ) != i )
      printf( "Error at %d\n", i );

  printf("\n");
  for( i = 0; i < 50; i += 2 )
    T = Delete( i, T );

  PrintTree(T);
      
  for( i = 1; i < 50; i += 2 )
    if( ( P = Find( i, T ) ) == NULL || Retrieve( P ) != i )
      printf( "Error at %d\n", i );
  for( i = 0; i < 50; i += 2 )
    if( ( P = Find( i, T ) ) != NULL )
      printf( "Error at %d\n", i );

  printf( "Min is %d, Max is %d\n", Retrieve( FindMin( T ) ),
	  Retrieve( FindMax( T ) ) );

 
  int nodes = CountNodes (T);
  int leaves = ConuntLeaves (T);
  int fullnodes = ConuntFull (T);
  printf ("nodes = %d,leaves = %d,fullnodes = %d \n",nodes,leaves,fullnodes);	 
	
  return 0;
}

