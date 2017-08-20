#include <stdio.h>
#include "list.c"

void SwapNode (List L, Position P1, Position P2)  {
  Position pre = FindPrevious(P1->Element,L);
  Position tmp = Advance(P2);

  pre-> Next = P2;
  P2 -> Next = P1;
  P1 -> Next = tmp;
}


int main()  {

    List L = MakeEmpty(NULL);
    Position Lpos = Header(L);

     
    for (int i = 0;i < 10;i++)  {
      Insert(i,L,Lpos);
      Lpos = Advance(Lpos);
    }

    PrintList(L);
    printf("\n");

    Position P1 = Find (3,L);
    Position P2 = Advance (P1);
    SwapNode (L,P1,P2);

    PrintList(L);
   
   return 0;
 }
