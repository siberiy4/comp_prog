#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;

    vector<char> MAE(100005);
    vector<char> ATO(100005);
    vector<char> SYUTURYOKU(10000005);

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>MAE[i];
        cin>>ATO[i];

    }
    cin>>m;

    for(int i=0;i<m;i++){
        cin>>SYUTURYOKU[i];
        for(int x=0;x<n;x++){
            if(MAE[x]==SYUTURYOKU[i]){
                SYUTURYOKU[i]=ATO[x];
                break;
            }
        }
    }

    for(int i=0;i<m;i++){
        cout<<SYUTURYOKU[i];
    }

    cout<<endl;

}