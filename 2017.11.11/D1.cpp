#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;

int main(){
        int N,Z,W,i=1,b=1;
    cin >>N >>Z >>W;
    vector<int> a(N);

    for(i=b;i<N;i++){
        cin >>a[i];
    }

    while(i<N){
        for(i=b;i<N;i++){
            if(a[i-1]>a[i]&&a[i-1]>Z){
                Z=a[i-1];
                b=i+2;
                break;
            }
        }
        for(i=b;i<N;i++){
            if(a[i-1]<a[i]&&a[i-1]<W){
                Z=a[i-1];
                b=i+2;
                break;
            }
        }

    }

        cout << abs(W-Z) <<endl;

}