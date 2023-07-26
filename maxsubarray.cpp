#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void start(void);
void find(int[],int,int[],int);

int main() {
	// your code goes here
	start();
	return 0;
}

void start(void)
{
    int T;
    cin>>T;
    while(T!=0)
    {
        int N,M,i;
        cin>>N;
        int A[N];
        for (i=0;i<N;i++)
            cin>>A[i];
        cin>>M;
        int B[M];
        for(i=0;i<M;i++)
           cin>>B[i];
        find(A,N,B,M);
        --T;
    }
}


void find (int A[],int N,int B[],int M)
{   
    int i,Bsum=0;
    for(i=0;i<M;i++)
        {
            if(B[i]>0)
              Bsum+=B[i];
        }
    int max=0,temp=INT_MIN;
    int index=0,pos=0;
    for(i=0;i<N;i++)
      {
          max=max+A[i];
          if(temp<max)
             temp=max;
             index=i;
          if(max<0)
             max=0;
             
      }
    int maxl=0;
    max=0;
    if(index=0)
      {
        maxl=temp;
        for(i=0;i<N;i++)
          {
            max+=A[i];
          }
       }
    else
        {
           for(i=0;i<N;i++)
           {  if(i<=index)
                maxl+=A[i];
              else
                max+=A[i];
           }
        }
    max+=temp;
    if(maxl+Bsum>=max+Bsum)
       if(maxl+Bsum>=temp)
          max=max+Bsum;
       else
          max=temp;
    else
      if(max+Bsum>=temp)
         max=max+Bsum;
    else
         max=temp;
    
  cout<<max<<"\n";
    
}