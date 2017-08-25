#include "fatal.h"

#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

struct QueueNode;
typedef int ElementType ;
typedef struct QueueNode * Queue;
typedef struct QueueNode * Position;

void DeleteQueue  (Queue Q);
Queue MakeEmpty(Queue Q);
int  IsEmpty  (Queue Q);
int  IsFull (Queue Q);
void EnQueue  (ElementType X, Queue Q);
void DeQueue  (Queue Q);
ElementType FrontAndDequeue (Queue);

#endif



