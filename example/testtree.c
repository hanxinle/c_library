#include "tree.c"
#include <stdio.h>

int main(int argc,char **argv )	{
  SearchTree T;
  Position P;
  int i;

  T = MakeEmpty  ( NULL );
  for( i = 0; i < 50; i += 5)
    T = Insert  ( i, T );
  PrintTree  (T);
	printf  ("\n");

	for  (i = 0;i < 50; i += 10)
	T = Delete (i,T);
	PrintTree  (T);
  printf ("\n");
  printf ("Min is %d,Max is %d. \n",Retrieve(FindMin(T)),Retrieve((FindMax(T))));
  
	return 0;
}

