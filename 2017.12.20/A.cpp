#include<bits/stdc++.h>

bool binary_search(int a[],int n, int x){
    int l=0, r=n;
    while(r-l>0){
        int mid =(l+r)/2;
        if(a[mid]==x)return true;
        else if(x<a[mid])r=mid;
        else l=mid+1;
    }
    return false;
}

int main(){
    int n,q;
    vector<int> S(1000000);
    vector<int> T(50000);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>S[i];
    }
    cin>>q;
    for(int i=0;i<n;i++){
        cin>>T[i];
    }
    for(int i=0;i<n;i++){
        if(binary_search(T,)==0){

        }
    }








}