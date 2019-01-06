#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,AB,Am,Bm,ABm;
    vector<long long> ans(3);

    cin>>Am>>Bm>>ABm>>A>>B;
    ans[0]=Am*A+Bm*B;

    ans[1]=max(A,B)*ABm*2;
    
    if(max(A,B)==A){
        if(Am<)
    ans[2]=min(A,B)*ABm*2+(max(A,B)-min(A,B))*Am;        
    }else{
    ans[2]=min(A,B)*ABm*2+(max(A,B)-min(A,B))*Bm;
    }



    
        cout<<*min_element(ans.begin(),ans.end())<<endl;



}