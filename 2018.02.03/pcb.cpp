#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,Acount=0,Bcount=0,hante=0,count=0;
    vector<int> A(1000000005);
    vector<int> B(1000000005);

    cin>>N;

    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int i=0;i<N;i++){
        cin>>B[i];
        if(hante==0&&A[i]==B[i]){
            Acount++;
            Bcount++;
        }else{
            hante++;
        }
    }

    while(1){ 
        if(A[Acount]==B[Bcount]){
            Acount++;
            Bcount++;
        }else if(A[Acount]%2==B[Bcount]%2&&A[Acount]<B[Bcount]){ 
            A[Acount]=A[Acount]+2;
            B[Bcount+1]++;            
        }else if(A[Acount]%2==B[Bcount]%2&&A[Acount]>B[Bcount]){
        A[Acount+1]=A[Acount+1]+2;
        B[Bcount]++;            
        }else if(A[Acount]%2!=B[Bcount]%2){
            A[Acount]=A[Acount]+2;
            B[Bcount]++;            
        }
        if(Acount==N||Bcount==N)break;
}

if(A[N-1]==B[N-1]){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}

    
}