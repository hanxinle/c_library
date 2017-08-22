#include <stdio.h>
#include "list.c"

void PrintPos (List L,List P)  {
  Position Ppos,Lpos;
  Ppos = First(P);
  Lpos = First(L);

  int pre,now,step;
  pre = 1;
  
  while (Lpos != NULL && Ppos !=  NULL)  {
    now = Ppos->Element;
    step = now - pre;
    for (int i = 0; i < step ; i++)
      Lpos = Advance (Lpos);

    printf ("%d  ",Lpos->Element);
    pre = now;
    Ppos = Advance(Ppos);
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
