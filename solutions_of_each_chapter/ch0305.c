#include <stdio.h>
#include "list.c"


List ListJiaoJi (List P, List L)  {
  if  (P == NULL || L == NULL )
    Error ("Out of space");
  Position   Ppos =  First (P);
  Position   Lpos =  First (L);
  
  List R = MakeEmpty (NULL);
  Position Rpos = Header(R);
 
  while ( Ppos != NULL  && Lpos != NULL )  {

    if  ( Retrieve(Ppos) < Retrieve(Lpos) ) 
      Ppos = Advance (Ppos);
    else
      if ( Retrieve(Ppos) > Retrieve (Lpos)) 
	Lpos = Advance (Lpos);
      else {
	Insert ( Retrieve (Lpos),R,Rpos);
	Lpos = Advance (Lpos);
	Ppos = Advance (Ppos);
	Rpos = Advance (Rpos);
      }
  }
  return R;
}

int main(int argc, char *argv[])   {

  
  List L;
  Position Lpos;
  List P;
  Position Ppos;
  
  int i;
  P = MakeEmpty (NULL);
  L = MakeEmpty( NULL );

  Ppos = Header( P );
  Lpos = Header (L);

  for( i = 0; i < 10; i++ ) {
    Insert( i, L, Lpos );
  
    Lpos = Advance( Lpos );
  }
  PrintList( L );
  
  Insert (3,P,Ppos);
  Ppos = Advance (Ppos);

  Insert (5,P,Ppos);

  PrintList (P);
  List R = MakeEmpty(NULL);
  R =  ListJiaoJi (P,L);
  PrintList (R);
  
  return 0;
}
