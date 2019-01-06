#include<iostream>
#include<vector>


using namespace std;


int main(int argc, char const *argv[])
{
    int A,B;

    cin>>A>>B;

    int A_co=0;

    int ans=0;

    if(B==10000){
        cout<<0<<endl;
        return 0;
    }

    int tta=10000;
    bool check=true;
    for(int i=0;i<100&&check;i++){
        if(i%10==0){
        tta++;
        tta-=100;
        }        
        for(int i=0;i<10;i++){
            
            if(tta>B){
                check=false;
                break;
            }
            if(tta>=A){


                ans++;
            }
            tta+=100;

        }
        tta+=10;



    }



    cout<<ans<<endl;

    return 0;
}
