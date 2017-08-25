#include "list.c"

int main(int argc, char *argv[])  {
  Queue Q;
  Q = MakeEmpty (NULL);

  EnQueue (1,Q);
  EnQueue (2,Q);
  
  ElementType X = 12 ;
  
  while ( !IsEmpty(Q))  {
    printf ("%d ", Q->Front->data);
    DeQueue (Q);
  }
  printf("\n");  
  printf("Empty = %c\n",IsEmpty(Q)?'Y':'N' );

  Q = MakeEmpty (NULL);
  EnQueue (X,Q);
  EnQueue (21,Q);
  EnQueue (X,Q);
  printf("Queue is: ");
  
  Position P = Q -> Front;
  while (P)  {
    printf ("%d ",P->data);
    P = P->Next;
  }
  printf("\n");
  
  printf ("Front and Rear:%d %d  ",Q->Front->data,Q->Rear->data);
  printf("\n");
  
  ElementType Y = FrontAndDequeue (Q);
  printf ("Del and Front:%d %d ", Y,Q->Front->data);
  
  printf("\n");
  Y = FrontAndDequeue (Q);
  printf ("Del and Front:%d %d ", Y,Q->Front->data);
  printf("\n");
  
  Y = FrontAndDequeue (Q);
  printf ("Del and Front:%d %d\n", Y,(Q->Front == Q?0:Q->Front->data));

  DeQueue (Q);    //do not Del any node
  DeQueue (Q);

  printf("size = %d\n",Q->size);

  return 0;

}
