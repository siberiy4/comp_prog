#include<iostream>
#include<vector>

using namespace std;
int main(){
    int N;
    double ave=0.0;

    cin>>N;
    while(N!=0){
        long sum=0;
        int ans=0;
        vector<int> vec(N);
        for(int i=0;i<N;i++){
            cin>>vec[i];
            sum+=vec[i];
        }
        ave=sum*1.0/N;

        for(int i=0;i<N;i++){
            if(vec[i]<=ave){
                ans++;
            }
        }

        cout<<ans<<endl;

        cin>>N;
    }

}