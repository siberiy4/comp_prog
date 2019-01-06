#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
  int N,K;
  
  cin>>N>>K;
  vector<int> stick(N);
  
  for(int &x:stick){
    cin>>x;
  }
  
  sort(stick.rbegin(),stick.rend());
  int ans=0;
  for(int i=0;i<K;++i){
    ans+=stick[i];
  }
  
  
  cout<<ans<<endl;
}