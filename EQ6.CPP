#include<iostream.h>
void main()
{ long sosq=0,s=0,n,sqos=0;
cout<<"Enter the limit"<<'\n' ;
cin>>n  ;                                 //in my case it's 100
s=(n*(n+1))/2 ;
sqos=s*s ;
sosq=(n*(n+1)*((2*n)+1))/6  ;
cout<<"Square of sum "<<sqos<<'\n' ;
cout<<"Sum of square"<<sosq<<'\n' ;
cout<<"The difference is="<<sqos-sosq ;
}