#include "bits/stdc++.h"

using namespace std;

int main()
{
    int max,i,n,f=0;
    //cout<<"enter number of test cases: \n";
    //cin>>T;
    cout<<"enter the array size:\n";
    cin>>n;
    int arr[n];
    cout<<"enter the array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    max=-1;
    for(i=0;i<n;i++)
    {  
       if(arr[i]>max)
       {
         max=arr[i];
         if(arr[i]>arr[i+1])
         f+=1;
         if(i=n-1)
         f+=1;
       }
       
    }

  cout<<"\n there are "<<f<<"record breaking days";

    return 0;
}