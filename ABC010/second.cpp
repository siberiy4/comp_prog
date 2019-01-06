#include<iostream>
#include<vector>

using namespace std;


int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    vector<int> hana(N);
    int ans=0;


    for(auto &x: hana){
        cin>>x;
        while(x%2==0||x%3==2){
            x--;
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}

