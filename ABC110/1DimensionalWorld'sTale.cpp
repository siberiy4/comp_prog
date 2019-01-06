#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N,M,X,Y;
    cin>>N>>M>>X>>Y;
    vector<int> X_city(N);
    vector<int> Y_city(M);

    for(auto &x:X_city){
        cin>>x;
    }
    for(auto &y:Y_city){
        cin>>y;
    }

    X_city.emplace_back(X);
    Y_city.emplace_back(Y);

    int max,min;
    max=*max_element(X_city.begin(),X_city.end());
    min=*min_element(Y_city.begin(),Y_city.end());

    if(min>max){
        cout<<"No War";
    }else{
        cout<<"War";
    }

    cout<<endl;

    return 0;
}
