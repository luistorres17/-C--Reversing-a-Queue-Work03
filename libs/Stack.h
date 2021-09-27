#ifndef _STACK_HPP
#define _STACK_HPP     


typedef int TIPO; 
const int STACKSIZE = 100;
struct Stack
{
  int top;
  TIPO items[STACKSIZE];
  Stack()  {  top = -1;  }
};


bool empty(Stack*);         
bool push(Stack*,TIPO);    
bool pop(Stack*,TIPO*); 

#endif