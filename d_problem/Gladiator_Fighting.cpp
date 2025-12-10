#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int mx=((n-2)*(n-1))/2;   
    int mn=n-2;
    cout<<mn<<" "<<mx<<endl;
  }  
    

  
   
  return 0;
}

//min--> always lower skill win korabo.prothom e 0+rest of fight 1.
//max-->always ekta gladitor ke win korabo.prothome 0+rest of fight e 1 kore barte thakbe.that means natural number er summation.

