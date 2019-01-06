#include <bits/stdc++.h>

using namespace std;

int main(){
    int ans=0,min;
    vector<long long> a(305);
    vector<long long> b(305);
    vector<int> s(305);
    int N;

    cin >>N;
    for(int i=0;i<N;i++){
        cin>>a[i];
        while(a[i]>0){ 
            b[i]=a[i]/2;

            if(b[i]*2!=a[i]){
                break;
            }
            s[i]++;
            a[i]=b[i];
        }
        
    }


    min=s[0];
    for(int i=1;i<N;i++){
        if(s[i]<min){
            min=s[i];
        }
    }


    cout << min << endl;

    return 0;

}