#include<iostream.h>
void main()
{ int i, j=1000;
  long s=0;
  for(i=0;i<j;i++)
   { if(i%3==0||i%5==0)
    s+=i ;      }

  cout<<"the sum is="<<s ;
}