#include<iostream>
using namespace std ;
long check(long m)
{ int n,rev=0 ;
  while(m!=0)
  {n=m%10 ;
   rev=(rev*10)+n ;
   m=m/10 ;
   }
    return rev ;
}
int main()
{ int i, j ;
  long LP=0,m,r ;
  for(i=100;i<1000;i++)
  { for(j=100;j<1000;j++)
      { m=i*j ;
       r=check(m) ;
       if(m==r && r>LP)
	  { LP=r;  }
      }
    }
  cout<<"The largest pallindrome is "<<LP<<'\n' ;
return 0;
}
