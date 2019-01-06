#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    vector<int> arr={1,2,3,4,5,6};

    N%=60;

    for(int i=0;i<N;++i){
        swap(arr[i%5],arr[i%5+1]);
    }

    for(auto &x:arr){
        cout<<x;
    }

    cout<<endl;

    return 0;
}
