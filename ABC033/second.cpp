#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<string> nms(N);
    vector<long> ppl(N);

    for(int i=0;i<N;++i){
        cin>>nms[i]>>ppl[i];
    }

    auto max=max_element(ppl.begin(),ppl.end());
    long sum=accumulate(ppl.begin(),ppl.end(),0);
    if(sum/2<*max){
        cout<<*(nms.begin()+(max-ppl.begin()))<<endl;
    }else{
        cout<<"atcoder"<<endl;
    }

}