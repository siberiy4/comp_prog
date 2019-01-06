#include <bits/stdc++.h>
using namespace std;
int main(){
    static int tmp ,N ,M ,a ,ans ,b ,c ,count ;
    string str;
    vector<int> vec;
    vector<int> rei;
    cin>>N;
    

    for(int i=0;i<N;i++){
        vec.emplace_back();
    }

    rei=vec;
    sort(rei.begin(),rei.end());
    a=rei[N/2];
    b=rei[N/2-1];

    for(int i=0;i<N;i++){
        if(vec[i]<a){
            cout<<a<<endl;
        }else{
            cout<<b<<endl;
        }
    }

}