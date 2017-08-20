#include <stdio.h>
#include "list.c"

void PrintPos (List L, List P)  {
  Position Lpos = Header (L);
  Position Ppos = First (P);

  int vstl=0;

  while ( Lpos != NULL && Ppos != NULL )  {
    if  (vstl++ == Ppos->Element)  {

      if (Ppos->Element <= 0)  ;
      else printf ("%d ",Lpos->Element);

      Ppos= Advance(Ppos);
    }

    Lpos = Advance(Lpos);
  }
}
      
int main()  {

    List L = MakeEmpty(NULL);
    Position Lpos = Header(L);

    List P = MakeEmpty(NULL);
    Position Ppos = Header(P);
  
    for (int i = 0;i < 10;i++)  {
      Insert(i,L,Lpos);
      Lpos = Advance(Lpos);
    }

    Insert(1,P,Ppos);
    Ppos = Advance(Ppos);
    Insert(3,P,Ppos);
    Ppos = Advance(Ppos);
    Insert(9,P,Ppos);
    
    PrintPos(L,P);
 
    return 0;
 }
