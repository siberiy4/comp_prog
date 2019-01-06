#include<iostream>
#include<deque>
#include<string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;

    deque<int> tonsoku;

    for(int i=0;i<to_string(N).length();i++){ 
        int tmp=N%10;
        tonsoku.push_front(tmp);
        N/=10;
    }

    vector<int> nana;

    for(int i=0;i<to_string(N).length()-2;i++){
        int si=tonsoku[i]*100+tonsoku[i+1]*10+tonsoku[i+2];
        nana.emplace_back(abs(si-753));

    }



    

    cout<<*min_element(nana.begin(),nana.end())<<endl;
}