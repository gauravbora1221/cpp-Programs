
#include "bits/stdc++.h"

using namespace std; 
int main()
{
   int n,cd=0,sum=0,j,i,ll,tl,tsum,l=1,k=0;
   cout<<"to print the longest arithmatic subarray sum\n ";
   cout<<endl<<"enter the array size:";
   cin>>n;
   int arr[n];
   cout<<"enter the array: \n ";
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"\n now compiation begins\n";
   i=1;
   ll=2;
   tl=2;
   l=tl;
   while(i<n)
   {  
     tl=2;
     cd=arr[i]-arr[i-1];
     tsum=arr[i]+arr[i-1];
     for(j=i+1;j<n;j++)
     {
       if(cd==(arr[j]-arr[j-1]))
       {
         tsum+=arr[j];
         tl+=1;
         i=j-1;
       }
       else
       {
         i+=1;
         break;
       }
     }
     if(l!=tl&tl!=2)
      {l=tl;
       k=0;
       }
     if(tl>ll)
     {
       ll=tl;
       sum=tsum;
       tsum=0;
       k+=1;
     }
     if(j>=n)
      { i=n;}
   }
   if(l==ll&k>1)
   {
     cout<<"\nthere are more than one longet arithmatic subarray\n";
     return 0;
   }

cout<<endl<<"the sum of the largest aritematic subarray is:"<<sum<<"and the size is:"<<ll-1;
return 0;

}