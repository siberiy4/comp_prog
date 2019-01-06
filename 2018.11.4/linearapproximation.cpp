#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;


int main(){
    int N;
    cin>>N;

    deque<int>  sunuke(N);
    for(int i =0;i<N;i++){
        cin>>sunuke[i];
        sunuke[i]-=(i+1);
    }

    deque<int> sorted;

    sorted=sunuke;

    sort(sorted.begin(),sorted.end());

    int b;

    b=sorted[((sorted.size()-1)/2)];

    long ans=0;

    for(auto &x:sorted){
        ans+=abs(x-b);
    }


    cout<<ans<<endl;


}
