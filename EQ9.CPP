#include<iostream.h>
void main()
{ long a, b, c ;
  for(c=1;c<500;c++)
  { for(b=1;b<c;b++)
    { for(a=1;a<b;a++)
     { if(((a*a)+(b*b)==(c*c))&&(a+b+c==1000))
      {	cout<<"The triplet is "<<a<<" "<<b<<" "<<c<<'\n' ;
	cout<<"The product is= "<<a*b*c <<'\n' ;
       }
      }
    }
   }
  }