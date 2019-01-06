#include <bits/stdc++.h>

using namespace std;

int main(){
    int ans=0;
    vector<int> s(4);
    int N;
    cin >>N;
    s[0]=N/100;
    s[1]=(N/10)%10;
    s[2]=N%10;
    
    for(int i=0;i<3;i++){
        if(s[i]==1){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;

}