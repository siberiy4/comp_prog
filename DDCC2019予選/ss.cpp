#include<iostream>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{
    string gu;

    cin>>gu;

    bool tes=false;

    
    while(!tes){
        gu.pop_back();
        gu.pop_back();

        for(int i=0;i<gu.size()/2;++i){
            if(gu[i]!=gu[gu.size()/2+i]){
                break;
            }else if(gu[i]==gu[gu.size()/2+i]&&i==gu.size()/2-1){
                tes=true;
            }
        }

    }

    cout<<gu.size()<<endl;
    

    return 0;
}
