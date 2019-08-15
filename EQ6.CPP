#include<iostream>
using namespace std ;

int main()
{ long sosq=0,s=0,sqos=0;
  int n=100 ;                                
s=(n*(n+1))/2 ;
sqos=s*s ;
sosq=(n*(n+1)*((2*n)+1))/6  ;
cout<<"Square of sum "<<sqos<<'\n' ;
cout<<"Sum of square"<<sosq<<'\n' ;
cout<<"The difference is="<<sqos-sosq ;

return 0;
}
