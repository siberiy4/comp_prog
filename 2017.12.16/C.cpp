#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,count=0,kari;
    vector<int> a[10000000005];
    vector<int> b[10000000005];

    cin>>N;

    for(int i=0;i<N;i++){
        cin>>a[i];
    }

    for(int i=0;i<N;i++){
        kari=a[i];
        b[kari]++;
    }

    for(int k=0;k<N;k++){
        if(b[k]>k){
            count=count+(b[k]-k);
        }
        if(b[k]<k){
            count=count+b[k];
        }
    }

    cout<<count<<endl;
}