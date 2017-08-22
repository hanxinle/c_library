#include "list.c"

List  ReverseList (Position P)  {

  if ( P->Next == NULL )  {
     List LR = MakeEmpty (NULL);
     LR -> Next = P;
     return LR;
  }

  List RL = MakeEmpty(NULL);
  RL = ReverseList (P->Next);
  P->Next->Next = P;
  P->Next = NULL;
  return RL;
}    

int main()  {
  List L = MakeEmpty (NULL);
  Position Pos = Header( L);

  Insert (1,L,Pos);
  Pos = Advance (Pos);

  Insert (2,L,Pos);

  Pos = Advance (Pos);

  PrintList(L);

  List RL =  MakeEmpty(NULL);
  RL = ReverseList (L->Next);
  PrintList (RL);

 

  return 0;
}
