#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    vector<string> DFS(10, 'a');
    vector<string> ABC(3);

    ABC[0]="a";
    ABC[1]="b";
    ABC[2]="c";

    cin>>N;
    for(int j=0;j<pow(3,N);j++){ 
        for(int i=0;i<N;i++){
            cout<<DFS[i];
        }
        
    }


    cout<<endl;
    
    
    
    
    cout<<N;
}