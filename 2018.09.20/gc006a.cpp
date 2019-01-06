#include<iostream>
using namespace std;

int main(){
    int N;
    string S,T;

    cin>>N>>S>>T;

    int check=N;

    for(int i=0;i<N;i++){
        if(S[i]==T[0]){ 
            for(int k=0;i+k<N;k++){
            
                if(S[i+k]==T[k]){
                    if(i+k==N-1){
                        check=i;
                        cout<<N+check<<endl;

                        return 0;
                    }
                    
                }
            }
        }
    }
                        cout<<N+check<<endl;


}