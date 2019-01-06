#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> vec(N);

    vector<int> odd(1000000);
    vector<int> even(1000000);

    for(int i=0;i<N;i++){
        cin>>vec[i];

        if(i%2==0){
            even[vec[i]]+=1;
        }else{
            odd[vec[i]]+=1;
        }
    }

    auto even_max=max_element(even.begin(),even.end());
    auto odd_max=max_element(odd.begin(),odd.end());

    int even_tmp=0,odd_tmp=0;

    even_tmp=*even_max;
    odd_tmp=*odd_max;


    if(odd_max==even_max){
        if(even_tmp>odd_tmp){
            cout<<N-even_tmp;

            cout<<"a";
        }else if(even_tmp<odd_tmp){
            cout<<N-odd_tmp;

            cout<<"b";
        }else{
            N-=even_tmp;
            even.erase(even_max);
            odd.erase(odd_max);
            auto even_max=max_element(even.begin(),even.end());
            auto odd_max=max_element(odd.begin(),odd.end());

            int even_tmp=0,odd_tmp=0;

            even_tmp=*even_max;
            odd_tmp=*odd_max;

            if(even_tmp>odd_tmp){
                cout<<N-even_tmp;
                cout<<"c";
            }else{
                cout<<N-odd_tmp;

                cout<<"d";
            }
        }
    }else{
        cout<<N-odd_tmp-even_tmp;
        cout<<"e";
    }

    cout<<endl;

}