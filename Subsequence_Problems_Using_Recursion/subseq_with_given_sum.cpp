/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
void subseq(int i,vector<int>&v,vector<int>&a,int n,int s,int k)
{   if(i>=n)
     {      if(s==k)
            { for(int j=0;j<v.size();j++)
              cout<<v[j]<<" ";
              cout<<endl;
            }
              
              return ;
     }
      v.push_back(a[i]);
        s+=a[i];
        subseq(i+1,v,a,n,s,k);
      v.pop_back();
      s-=a[i];
      subseq(i+1,v,a,n,s,k);
      
}

int main()
{   int n,k;
cin>>n;
cin>>k;
    vector<int>a(n);
    vector<int>v;
    for(int i=0;i<n;i++)
      cin>>a[i];
     subseq(0,v,a,n,0,k);
    
    

    return 0;
}
