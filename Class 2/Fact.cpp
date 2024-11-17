#include<bits/stdc++.h>
using namespace std;
int fun(int n)
     {
         if(n==1)
            return 1;
         else
            return n*fun(n-1);

     }
     int main(){

     int n;
     //n=5;
     cin>>n;
     cout<<fun(n)<<endl;
     }
