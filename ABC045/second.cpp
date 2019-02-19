#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<string> player(3);

    cin>>player[0]>>player[1]>>player[2];

    int pre=0;
    int now=player[0][0] - 'a';

    while(1){


        player[pre].erase(player[pre].begin());
        pre=now;
        if(player[now].empty()){
            break;
        }

        now=player[now][0] - 'a';

    }
    

    if(now==0){
        cout<<"A"<<endl;
    }else if(now==1){
        cout<<"B"<<endl;
    }else{
        cout<<"C"<<endl;
    }


}
