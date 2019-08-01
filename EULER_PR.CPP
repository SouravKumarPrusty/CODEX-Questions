#include<iostream.h>
void main()
{ long a=1, b=2 ;
  long c=0, sum=0 ;
  while(c<4000000)
  { c=a+b;
    if(c%2==0)
    sum+=c ;
    a=b;
    b=c;
  }
cout<<"The sum of even prime no.+"<<sum ;
}