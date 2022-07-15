/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
void subseq(int i,vector<int>&v,vector<int>&a,int n)
{   if(i>=n)
     {
            for(int j=0;j<v.size();j++)
              cout<<v[j]<<" ";
              cout<<endl;
              
              return ;
     }
      v.push_back(a[i]);
        subseq(i+1,v,a,n);
      v.pop_back();
      subseq(i+1,v,a,n);
      
}

int main()
{   int n;
cin>>n;
    vector<int>a(n);
    vector<int>v;
    for(int i=0;i<n;i++)
      cin>>a[i];
     subseq(0,v,a,n);
    
    

    return 0;
}
