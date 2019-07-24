#include<bits/stdc++.h>


using namespace std;


long long lcm(long long a,long long b){
    return a / __gcd(a, b) * b;
}

int main(){
    long long N,A,B,C,D;
    long long ans=0;


    cin>>A>>B>>C>>D;
    long cwari=(B/C-(A-1)/C);
    long dwari=(B/D-(A-1)/D);
    long lll=(B-(A-1))/lcm(C,D);
    
    ans=B-A+1+lll-cwari-dwari;


    cout<<ans<<endl;


}