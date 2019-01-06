#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,ans=0;
    cin >> N;
    vector<int> vec;
    int count = 0;

    while(N!=0){
        int tmp=N % 10;
        if(tmp>0)
            count++;
        vec.push_back(tmp);
        N = N / 10;
    }
    
    if(count==1&&vec[vec.size()-1]==1){
        ans = 10;
    }else if(count==1){
        ans = vec[vec.size() - 1];
    }else{
        ans = accumulate(vec.begin(), vec.end(),0);
    }

    cout<<ans<<endl;
}