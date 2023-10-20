#include<bits/stdc++.h>
using namespace std;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================


int countfaults(int n,vector<string>logs){
  map<string,int>m;
  int ans=0;
  for(int i=0;i<logs.size();i++){
    string te="";
    te+=logs[i][0];
    te+=logs[i][1];
    if(logs[i].substr(3)=="error"){
      if(m[te]==2){
      ans++;
      m[te]=0;
    }
    else{
      m[te]++;
    }
    }
    else{
      m[te]=0;
    }
  }
  return ans;
}


void solve() {
  int i, j, n, m;
  vector<string>v={"s2 error","s3 error","s3 error","s3 error","s3 error","s3 error","s3 error","s2 error","s2 error"};
  cout<<countfaults(v.size(),v)<<endl;
  
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}


