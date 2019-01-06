#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >>N;

    deque<long> arr;

    for(int i=0;i<N;i++){
        long tmp;
        cin>>tmp;
        if(i%2==0){
            arr.push_back(tmp);
        }else{
            arr.push_front(tmp);
        }
    }

    if(N%2==1){
        reverse(arr.begin(),arr.end());
    }

    for(auto &x:arr){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}


