#include<iostream>
#include<set>
#include<string>
using namespace std;


int main(){
  string S;
  int k=0;
  cin>>S>>k;

  set<string> ans;
    string tmp="";
 
    int loop_num=S.size()-(k-1);

    if(loop_num<0){
        loop_num=0;
    }

  for(int i=0;i<loop_num;i++){
    tmp="";
    for(int g=i;g<loop_num&&g<i+k;g++){
      tmp+=S[g];

    }
    if(tmp.size()==k){ 
    ans.insert(tmp);
    }

  }


  cout<<ans.size()<<endl;
}
  