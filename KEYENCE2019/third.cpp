#include<bits/stdc++.h>
 using namespace std;

 int main(){
     int N;
     cin>>N;
     vector<long> A(N);
     vector<long> B(N);

    for(auto &x:A){
        cin>>x;
    }
    for(auto &x:B){
        cin>>x;
    }
    vector<long> F;
    vector<long> C;
    for(int i=0;i<N;++i){
        if(A[i]<B[i]){
            F.emplace_back(A[i]);
            C.emplace_back(B[i]);
        }
    }

    sort(F.begin(),F.end());
    sort(C.begin(),C.end());

    
    
    for(int i=0;F.size();++i){
    
    cout<<F[i]<<" "<<C[i]<<endl;
    
        if(F[i]<C[i]){
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<F.size()<<endl;

 }