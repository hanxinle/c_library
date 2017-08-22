#include "list.c"


/* 

NOTE: book's answer will just return cur,if do this, the reverselist will not have a head node ,PrintList will not work as hoped.I think it is wrong.It is my method's (as follow) output:
1 2
2 1
1 2 
 */
List ReverseList (List L)  {

  Position pre,cur,nex;

  pre = NULL;
  cur = L->Next;
  nex = First(L)->Next;
  while (nex != NULL )  {
    cur-> Next = pre;
    pre = cur;
    cur = nex;
    nex = Advance(nex);
 }
  cur->Next = pre;       //return cur; 
  nex = MakeEmpty (NULL);
  nex -> Next = cur;

  return nex;
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
    RL = ReverseList (L);
  PrintList (RL);

  List RRL = ReverseList(RL);

  PrintList (RRL);

  return 0;
}
