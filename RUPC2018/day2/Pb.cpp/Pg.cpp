#include<bits/stdc++.h>
using namespace std;

int main(){
    int atmp=0,btmp=0,N=0, A=0, B=0, ans=0;
    vector<int> a;
    vector<int> b;
    vector<int> confirm;

    cin>>N>>A>>B;

    for(int i=0;i<N;i++){
        cin>>atmp;
        a.push_back(atmp);
        cin>>btmp;
        b.push_back(btmp);
        confirm.push_back(1);
    }

    for(int i=0;i<N;i++){
        if((abs(a[i]-b[i])<=A) || (B<=abs(a[i]-b[i])&&abs(a[i]-b[i])<=2*A)){
            ans++;
            confirm[i]=0;
        }
    }

    for(int i=0;i<N-1;i++){
        if(confirm[i]){ 
            for(int j=0;j<N;j++){
                if(confirm[j]&&j!=i){                 
                    if((abs(a[i]+a[j]-b[i]-b[j])<=A ) || (B<=abs(a[i]+a[j]-b[i]-b[j])&&abs(a[i]+a[j]-b[i]-b[j])<=2*A ) ){ 
                        ans++;
                        confirm[i]=0;
                        confirm[j]=0;
                        break;
                    }
                }
            }
        }
    }

    cout<<ans<<"\n";
}
