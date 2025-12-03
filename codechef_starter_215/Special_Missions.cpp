#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,c;
	    cin>>n>>c;
	    vector<int>v(n);
        
	    for(int i=0;i<n;i++){
	        cin>>v[i];
            
	    }
	    string s;
	    cin>>s;
        int coinZ=0;
        int coinN=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                coinZ+=v[i];
            }
            if(s[i]=='1'){
                coinN+=v[i];
            }
        }
        
        if(coinZ>=c && coinN>c){
            cout<<coinN+coinZ-c<<endl;
        }else{
            cout<<coinZ<<endl;
        }

	}
}