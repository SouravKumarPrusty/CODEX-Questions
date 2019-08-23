#include<iostream>
using namespace std ;

int main()
{ long a, b, c ;
  for(a=1;a<1000;a++)
  { for(b=1;b<1000;b++)
    { c=1000-a-b ;
      if((a*a)+(b*b)==(c*c))
      {	cout<<"The triplet is "<<a<<" "<<b<<" "<<c<<'\n' ;
	cout<<"The product is= "<<a*b*c <<'\n' ;
       }
      }
    }
   return 0;
  }
