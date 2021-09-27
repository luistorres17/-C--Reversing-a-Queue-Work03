#include <iostream>
#include <cstdlib>
#include "libs/Queue.h"
#include "libs/Stack.h"
using namespace std;
 
 int main(void)
 {
     int n; 
     Queue q1;
     Stack pl1;

     cout<<"ingrese los elementos, termine con 0"<<endl;
     cin>>n;
     while ((n!=0) && !insert(&q1,n))
     {
         cin>>n;
     }

     while (!extract(&q1,&n))
     {
         !push(&pl1,n);
     }
     while (!pop(&pl1,&n))
     {
         !insert(&q1,n);
     }
     cout<<"Salida de los datos"<<endl;
     while (!extract(&q1,&n))
     {
         cout<<n<< " ";
     }
     
     return 0;
     
 }

