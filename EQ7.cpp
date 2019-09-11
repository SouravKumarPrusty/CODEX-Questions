#include <iostream>
#include<math.h>

using namespace std;

int checkprime(int PN)
{
    int i=1,c=0;

     for(i=1;i<=sqrt(PN);i+=2)
        {if(PN%i==0)
        {c++ ;}   }
    if(c==1)
        return 1;
     else
        return 0;
}
int main()
{
   int pn=3 ;
   int n=0, PN;

    while(n<10000)
    {if(pn%2!=0)
      { PN= checkprime(pn) ;
         if(PN==1)
           { pn++; n++ ;}
         else
            { pn++ ;}
        }
     else
         pn++; }
    cout<<"The 10001st prime number is "<<pn-1<<'\n' ;

    return 0;
}
