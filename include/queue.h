#include "fatal.h"
#ifndef QUEUE_H
#define QUEUE_H

typedef int ElementType;

struct QueueRecord;

typedef struct QueueRecord * Queue;


int  IsEmpty( Queue Q );
int  IsFull( Queue Q );
Queue  CreateQueue( int MaxElements ) ;
void  MakeEmpty( Queue Q );
void  DisposeQueue( Queue Q );
int  Succ( int Value, Queue Q );
void  Enqueue( ElementType X, Queue Q );
ElementType  Front( Queue Q );
void  Dequeue( Queue Q );
ElementType  FrontAndDequeue( Queue Q );

#endif 
