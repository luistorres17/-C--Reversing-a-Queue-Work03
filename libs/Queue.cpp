#include <iostream>
#include <cstring>
#include "Queue.h"

using namespace std;



bool full( Queue * Q )
{  return (Q->count == QUEUESIZE);  }


bool empty( Queue * Q )
{  return (Q->count == 0);  }


bool extract( Queue * Q, TIPO *valor )
{
  if (empty (Q) == true)
    return true;
  Q->count--;
  *(valor) = Q->items[Q->head++];
  return false;
}


bool insert( Queue * Q, TIPO valor )
{
  if (full (Q) == true)
    return true;
  Q->count++;
  Q->items[Q->tail++] = valor;
  return false;
}