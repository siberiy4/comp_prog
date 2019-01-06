//sorted arrays

#include<iostream>
#include<deque>

using namespace std;

int main(){
    int N;
    cin>>N;
    deque<long> so;

    for(int i=0;i<N;i++){
        long x;
        cin>>x;
        if(!so.empty()&&so[so.size()-1]!=x||so.empty()){ 
            so.emplace_back(x);
        }
    }
/*
for(auto &x:so){
    cin>>x;
}
*/

    if(N==1){
        cout<<1<<endl;
        return 0;
    }

    int pre=0;
    bool cresc=true;
    bool newer=true;
    long ans=0;
    bool last=true;


    for(int i=1;i<so.size();++i){
        
        if(newer){
            if(so[i]<so[i-1]){
                cresc=false;
            }else{
                cresc=true;
            }
            newer=false;
        }
        if(cresc&&so[i]<so[i-1]){
            ans++;
            pre=i;
            newer=true;
            if(newer&&i==so.size()-1){
                ans++;
            }
        }else if(!cresc&&so[i]>so[i-1]){
            ans++;
            pre=i;
            newer=true;
            if(newer&&i==N-1){
                ans++;
            }
        }

    }

    if(pre!=N-1)ans++;

    cout<<ans<<endl;

}