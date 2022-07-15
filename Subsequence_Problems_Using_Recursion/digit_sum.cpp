/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int func(int n)
{     if(n<10)
        return n;
    
    return (n%10+func(n/10));
}
int main()
{   int  n;
    cin>>n;
    cout<<func(n);
    
    

    return 0;
}
