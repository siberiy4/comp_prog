#include<bits/stdc++.h>

using namespace std;
int main(){
    long long N;
    cin>>N;
    int A,B;
    cin>>A>>B;


    int iti=0,ni=0,san=0;

    for(int i=0;i<N;++i){
        int tmp;
        cin>>tmp;

        if(tmp<=A){
            iti++;
        }else if(tmp<=B){
            ni++;
        }else{
            san++;
        }
    }


    vector<int> test;
    test.emplace_back(iti);
    test.emplace_back(ni);
    test.emplace_back(san);


    cout<<*min_element(test.begin(),test.end())<<endl;
}