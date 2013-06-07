//Given the sum calculate the Pythagorean triplet
//Copyright (C) 2013 Pooja Ahuja

#include<iostream>
#include<math.h>

using namespace std;


long gcd(long x, long y) {                                 //efficient
    while (x * y != 0) {
        if (x >= y) x = x % y;
        else y = y % x;
    }
    return (x + y);
}


int main()
{
  
  long sum=0,reduce,a,b,c,limit,s,k,d,n;                 //thats the sum given in question X
  
  cout<<"\nKindly enter the sum of the triplets:";       //input sum
  
  cin>>sum;

   reduce=sum/2;
   limit=ceil(sqrt(reduce));      

   for(int i=2;i<=limit;i++)
   {
      if(reduce%i==0){
         s=reduce/i;
         while(s%2==0){                                 //reduce the storage
               s=s/2;  
         }
       if(i%2==1)
          k=i+2;
       else
          k=i+1; 

       while(k<(2*i) && k<=s){
             if(s % k==0 && gcd(k,i)==1){               //coprimes
                d=reduce/(k * i);
                n=k-i;
                a=d*(i*i-n*n);                         //Euclids formula enhanced
                b=2*d*i*n;
                c=d*(i*i+n*n);
                if(sum==(a+b+c))
                   cout<<"\nBy using parametrisation of Pythagorean triplets:"<<a<<"\t"<<b<<"\t"<<c<<endl;
                else
                    cout<<"\nNo such Pythagorean triplet exists! Kindly check the sum"<<endl;
             }
          k=k+2;
       }
      }
   }

  return 0;
}
