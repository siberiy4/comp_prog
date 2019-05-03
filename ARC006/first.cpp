#include<iostream>
#include<vector>
#include<bitset>
using namespace std;


int main(){
    vector<int> T(6),S(6);
    int B;
    for (auto &x : T)
    {
        cin>>x;
    }
    cin>>B;
    for (auto &x : S)
    {
        cin>>x;
    }
    
    

    vector<bool> tousen(10);
    vector<bool> sentaku(10);
    bitset<10> t=0,s=0;
    for(int i=0;i<T.size();++i){
        t|=1<<T[i];
    }
    for (int i = 0; i < S.size(); i++)
    {
        s|=1<<S[i];
    }

    bitset<10> ans=t&s;
    vector<int> syuturyoku={0,0,0,5,4,3,1};

    if(ans.count()==5&&s.test(B)){
        cout<<2<<endl;
    }else{
        cout<<syuturyoku[ans.count()]<<endl;
    }


}