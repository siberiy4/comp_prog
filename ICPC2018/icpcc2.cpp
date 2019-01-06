#include<iostream>
#include<vector>


using namespace std;

int main(){
    int b;

    cin>> b;
    while(b!=0){
        vector<int> vec(b);
        int anscount=0;
        int ansstrart=0;
        for(int i=1;i<b&&!vec.empty();i++){ 
            for(int k=0;k<vec.size();k++){
                vec[k]+=i+k;
                if(b==vec[k]){
                    anscount=i;
                    ansstrart=k+1;
                }
                if(b<=vec[k]){
                    vec.pop_back();
                }
           }
        }
        cout<<ansstrart<<" "<<anscount<<endl;



        cin>>b;
    }
}