#include<bits/stdc++.h>

using namespace std;

int main(){
	int N,L,cnt=1,ans=0;
    string S;
	cin >> N;
	cin >> L;
	cin >> S;

    for(int i=0;i<N;i++){

        if(S[i]=='+'){
            cnt++;
        }
        else if(S[i]=='-'){
            cnt--;
        }
        if(cnt>L){
            cnt=1;
            ans++;
        }
    }


	cout << ans << endl;


}
