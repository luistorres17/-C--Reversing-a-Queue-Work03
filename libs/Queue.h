#ifndef _QUEUE_HPP
#define _QUEUE_HPP

typedef int TIPO;
const int QUEUESIZE = 100;
struct Queue
{
  int count, head, tail;
  TIPO items[QUEUESIZE];
  Queue ()  {  count = head = tail = 0;  }
};

bool full(Queue*);         
bool empty(Queue*);         
bool extract(Queue*,TIPO*);     
bool insert(Queue*,TIPO);     
#endif