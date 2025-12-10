#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    string s;cin>>s;

    int count00=0,count11=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='0' && s[i+1]=='0'){
            count00++;
        }else if(s[i]=='1' && s[i+1]=='1'){
            count11++;
        }
    }
    if(count11>=count00){
        cout<<0<<endl;
    }else{
        int diff=count00-count11;
        cout<<(diff+1)/2<<endl;   // proti 2 difference er jnno hoi 11 bare 1ta and 00 kome 1.ba 00 kome 2ta.mane 1ta 0 ke 1 banaile 2ta 00 kome ultimately. tai bhag 2 kortesi,and ceil value er jnno diff er sathe 1 plus kortesi.karon ceil function boro value te wa dei.
    }
  }  
    

  
   
  return 0;
}


//alternative of ceil function-->(x+(y-1))/y;
