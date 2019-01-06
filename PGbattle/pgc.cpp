#include<bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[])
{

    int N;
    cin>>N;

    int ans=0;
    set<int> seisu;

    for(int i=1;i<=N;i++){

        for(int k=1;k<=N;k++){
            seisu.insert(i*i*k);
        }
    }

        cout<<seisu.size()<<endl;


    return 0;
}
