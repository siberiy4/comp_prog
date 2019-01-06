#include<iostream>
#include<vector>

using namespace std;

int main(){
  int ans=0,N;

  cin>>N;
  vector<int> vec(N);

  for(auto &&x : vec){
      cin>>x;
  }

  bool check=true;
  
    for(ans=0;check==true;ans++){

        for(auto &&x:vec){
            if(x%2==0){
                x=x/2;
            }else{
                check=false;
            }
        }

    }
  
  cout<<ans-1<<endl;
}