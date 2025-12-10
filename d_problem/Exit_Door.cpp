#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    vector<int>priority(n);
    map<int,int>seats;
    for(int i=0;i<n;i++){
        cin>>priority[i];
        seats[priority[i]]=i;
    }
    int total_disturbed=0;
    for(int i=n;i>0;i--){   // jeheto highest priority age ber hobe.
        int seat_no=seats[i];
        int left=0;
        for(int j=seat_no-1;j>=0;j--){  //left e koijon ache 
            if(priority[j]<i){  //jodi priority chuto hoi tar mane shee ekhono leave neinai.boro hole already leave niye niche
                left++;
            }
        }
        int right=0;
        for(int j=seat_no+1;j<n;j++){  //right e koijon ache
            if(priority[j]<i){
                right++;
            }
        }
        
        total_disturbed+=min(left,right);
        
    }
    cout<<total_disturbed<<endl;

  }  
    

  
   
  return 0;
}

