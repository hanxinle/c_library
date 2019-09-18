#include  "fatal.h"

typedef int ElementType ;
typedef struct QueueNode * Queue;
typedef struct QueueNode * Position;

#define MAXSIZE (6)


struct QueueNode  {
  ElementType data;
  Position Next;
  Position Rear;
  Position Front;
  int size;
};

void DeleteQueue  (Queue Q);
Queue MakeEmpty(Queue Q);
int  IsEmpty  (Queue Q);
int  IsFull (Queue Q);
void EnQueue  (ElementType X, Queue Q);
void DeQueue  (Queue Q);
ElementType FrontAndDequeue (Queue);



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


void Delete (Queue Q)  {
  if ( Q = NULL)
    Error ("Out of space.");
  Position P, tmp;
  P = Q->Next;
  Q -> Next = NULL;

  while ( P != NULL)  {
    tmp = P -> Next;
    free (P);
    P = tmp;
  }
}

Queue MakeEmpty (Queue Q)  {
  if ( Q != NULL)
    Delete (Q);

  Q = malloc (sizeof (struct QueueNode));
  if ( Q == NULL)  Error ("Out of memory.");
  Q -> Next = NULL;
  Q -> Rear = Q;
  Q -> Front = Q->Next;
  Q-> size = 0;
  return Q;
}

int IsFull (Queue Q)  {
  return Q->size == MAXSIZE; 
}

int IsEmpty (Queue Q)  {
  return Q->size == 0;
}

void EnQueue  (ElementType X, Queue Q)  {
  if ( Q == NULL ) Error ("Out of space.");

  Position tmp;
  tmp = malloc (sizeof (struct QueueNode));
  if (tmp == NULL)  Error ("Out of space,");

  tmp -> data = X;
  Q -> Rear -> Next = tmp;
  Q -> Rear = tmp;
  Q -> Rear -> Next = NULL;
  Q -> Front = Q -> Next;
  Q->size++;

  if (Q -> size > MAXSIZE)  Error ("Too large.");
  
}
  
void DeQueue  (Queue Q)  {
  if (IsEmpty(Q))  Error ("Empty Queue.");
  
  Position tmp = Q -> Front;
  Q -> Next = tmp -> Next;
   free(tmp);
  if (Q -> Front == Q->Rear)  { Q->Front = Q;}
  else {   Q -> Front = Q->Next;  }
  Q->size--;
}
  
ElementType FrontAndDequeue ( Queue Q)  {
  ElementType X;
  if (IsEmpty (Q))  Error ("Empty Queue.");
  
  X = Q ->Front->data;
  Position t = Q->Front;
  Q -> Next = t-> Next;
  if (Q -> Front == Q->Rear)  { Q->Front = Q;}
  else {   Q -> Front = Q->Next;  }
  free (t);
  Q -> size--;
    
  return X;
}




