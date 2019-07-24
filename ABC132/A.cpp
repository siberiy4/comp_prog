#include<iostream>
#include<algorithm>


using namespace std;

int main(){


    string st;
    cin>>st;

    sort(st.begin(),st.end());

    if(st[0]==st[1]&&st[2]==st[3]&&st[1]!=st[2]){
    cout<<"Yes"<<endl;
        return 0;
    }
        cout<<"No"<<endl;

}