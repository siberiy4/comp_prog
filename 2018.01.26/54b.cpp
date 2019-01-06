#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int N,M,count=0,ans=0;
    vector<string> Alist(2505);
    vector<string> Blist(2505);

    cin>> N;
    cin>>M;

    for(int i=0;i<N;i++){
        cin>>Alist[i];
    }
    for(int i=0;i<M;i++){
        cin >>Blist[i];
    }

    int k=0;

    for(int i=0;i<N;i++){
        if(Alist[i]==Blist[0]){
            count=0;
            k=i+1;
            ans=0;
            for(int j=1;j<M;j++){
                if(Alist[k]==Blist[j]){
                    k++;
                }else{
                    ans=1;
                    break;
                }
                if(ans==1)break;
                else count=0;
            }
        }
        count++;
    }


    if(count>=N||ans==1){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }


}