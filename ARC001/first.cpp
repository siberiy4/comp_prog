#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    vector<int> v(4);
    string S;
    cin>>N>>S;
    for (int i = 0; i < N; i++)
    {
        v[S[i]-'1']++;
    }

    sort(v.begin(),v.end());

    cout<<v[3]<<" "<<v[0]<<endl;

    
}
