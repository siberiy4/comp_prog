//shrinking

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string S;
    cin>>S;

    int ans=1e9;





    for(char test='a';test<='z';++test){
        int max_interval=0;
        int cnt_interval=0;
        for(auto &x:S){
            if(x==test){
                cnt_interval=0;
            }else{
                cnt_interval++;
            }

            max_interval=max(max_interval,cnt_interval);
        }
        ans=min(ans,max_interval);
    }



    cout<<ans<<endl;

}



