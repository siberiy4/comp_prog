#include<bits/stdc++.h>
using namespace std;
int main(){
    int character=97;    
    char ans;
    int Alphabet[26]={};
    int i=0;
    bool flag=true;

    string tmp;
    string Tasai;

    cin>>Tasai;

    for(int i=0;i!=Tasai.size();i++){
        Alphabet[int(Tasai[i])-97]++;
    }



    for(i=0;i<26;i++){
        if(Alphabet[i]==0){
            character=i+97;
            flag = false;
            break;
        }
    }

    if(flag){
        for(int j=24;j>=0;j--){
            if(Tasai[j+1]<Tasai[j]){
                for(int y=j;y>0;y--){
                    if(Tasai[y]>Tasai[y-1]){ 
                        Tasai[y-1]=Tasai[j+1];
                        for(int x=0;x<(j-y)+2;x++){ 
                            Tasai.pop_back();
                        }
                        cout<<Tasai<<endl;
                        return 0;
                    }
                }
            }
            Tasai.pop_back();
        }
        cout<<"-1"<<endl;
        return 0;
    }

    cout<<Tasai<<char(character)<<endl;
}