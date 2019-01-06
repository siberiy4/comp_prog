#include<bits/stdc++.h>
using namespace std;

bool binary_search(int a[],int n,int x){
    int l=0,r=n;
        int mid;
    while(r-l>0){
        mid=(l + r) / 2;
        if(a[mid]==x)return true;
        else if(x<a[mid])r=mid;
        else l =mid+1;
    }
    return false;
}

int main(){
    int n;
    int q;
    int ans=0;
    int t;
    int A[100005]={};

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>q;

    for(int i=0;i<q;i++){
        cin>>t;
        if(binary_search(A,n,t)) ans++;
    }
    cout<<ans<<endl;
    return 0;
}