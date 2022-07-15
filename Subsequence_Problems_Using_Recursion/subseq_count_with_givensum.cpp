/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int  subseq(int i,vector<int>&v,vector<int>&a,int n,int s,int k)
{   if(i>=n)
     {      if(s==k)
            {   return 1;
            }
              
              return 0;
     }
     
        s+=a[i];
        int r=subseq(i+1,v,a,n,s,k);
      
      s-=a[i];
      int l=subseq(i+1,v,a,n,s,k);
      
      
      return r+l;
}

int main()
{   int n,k;
cin>>n;
cin>>k;
    vector<int>a(n);
    vector<int>v;
    for(int i=0;i<n;i++)
      cin>>a[i];
     int res=subseq(0,v,a,n,0,k);
     cout<<res;
    
    

    return 0;
}
