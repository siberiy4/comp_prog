#include<bits/stdc++.h>

using namespace std;

int main(){ 
int  time[10]={};

//入店を記録
time[0]++;

//退店を記録
time[4]--;

time[2]++;
time[3]--;

time[3]++;
time[8]--;


time[3]++;
time[5]--;

time[4]++;
time[8]--;


for(int i=1;i<5;++i){
    time[i]+=time[i-1];
}



for(int i=0;i<5;i++){
    cout<<time[i]<<endl;
}


}