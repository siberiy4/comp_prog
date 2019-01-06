#include<iostream>
#include<vector>



using namespace std;

int main(){

    int N;
    cin>>N;


    int ans=0;

    vector<int> nine_power;
    vector<int> six_power;

    for(int i=9;i<N;i*=9){
        nine_power.emplace_back(i);
    }
    for(int i=6;i<N;i*=6){
        six_power.emplace_back(i);
    }

    while(N>0){
        while(!six_power.empty()&&six_power.back()>N){
            six_power.pop_back();
        }
        while(!nine_power.empty()&& nine_power.back()>N){
            nine_power.pop_back();
        }

        if(nine_power.empty()&&six_power.empty()){
            ans+=N;
            N=0;
        }else if(N-nine_power.back()<=N-six_power.back()){
            ans++;
            N-=nine_power.back();
        }else{
            ans++;
            N-=six_power.back();
        }
    }



    cout<<ans<<endl;


}