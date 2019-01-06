#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int Asum=0,Bsum=0;

    vector<int> A(10005);
    vector<int> B(10005);

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>A[i];
        cin>>B[i];

        if(A[i]>B[i]){
            Asum=Asum+A[i]+B[i];
        }else if(A[i]<B[i]){
            Bsum=Bsum+A[i]+B[i];            
        }else{
            Asum=Asum+A[i];
            Bsum=Bsum+B[i];
        }
    }


    cout<<Asum<<" "<<Bsum<<endl;


}