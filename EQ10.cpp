#include<iostream>
#include<math.h>
using namespace std;

int prime(long long) ;


int main()
{  long long i, j =2000000 ;
   long long s= 2;
   for(i=3;i<j;i+=2)
   {
       if(prime(i)) 
       {s+=i;}
   }
  cout<<"The sum= "<<s<<'\n' ;

}
int prime(long long i)
{
     int n, c=0 ;
     for(n=1;n<=sqrt(i);n+=2)
     {
          if(i%n==0)
            c++ ;
     }
     if (c==1)
        return 1 ;
     else
        return 0;
}
