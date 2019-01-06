#include<iostream>


using namespace std;


int main(){
    long A,B,C;
    cin>>A>>B>>C;

    int ans=0;

    if(A%2==1||B%2==1||C%2==1){
        cout<<0<<endl;
        return 0;
    }else if(A==B&&B==C){
        cout<<-1<<endl;
        return 0;
    }else{
        bool ccc=true;
        while(ccc){
                ans++;

            if(A%2==1&&B%2==1&&C%2==1){
                break;
            }
            else{
                A/=2;
                B/=2;
                C/=2;
            if(A%2==1&&((A%2)!=(B%2)||(A%2)!=(C%2))||B%2==1&&((B%2)!=(A%2)||(B%2)!=(C%2))||C%2==1&&((C%2)!=(A%2)||(C%2)!=(B%2))){
                ccc=0;
                break;
            }
                
            }
        }
    }

    cout<<ans<<endl;
}
