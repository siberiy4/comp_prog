#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    long long sum1=0,sum2=0;
    long long ans1=0,ans2=0;
    //1は遇を２は奇を正に

    for(int i=0;i<N;++i){
        long tmp=0;
        cin>>tmp;
        sum1+=tmp;
        sum2+=tmp;
        if(i%2==0){
            if (sum1<=0) {
                ans1+=abs(sum1-1);
                sum1=1;
            }
            if(sum2>=0){
                ans2+=abs(sum2+1);
                sum2=-1;
            }
        }else{
            if (sum1>=0) {
                ans1+=abs(sum1+1);
                sum1=-1;
            }
            if(sum2<=0){
                ans2+=abs(sum2-1);
                sum2=1;
            }
        }
    }

    cout<<min(ans1,ans2)<<endl;
}