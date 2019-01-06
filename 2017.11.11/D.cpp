#include<iostream>
#include <vector>
#include<cstdlib>

using namespace std;
int main(){
    int N,Z,W,i=0,b=0;
    cin >>N >>Z >>W;
    vector<int> a(N);

    for(i=b;i<N;i++){
        cin >>a[i];
        }

    while(i<N){
        for(i=b;i<N;i++){
            Z=a[i];
            i++;
            if(Z<a[i]){
                Z=a[i];
                b=i;
            break;
            }
        }

        for(i=b;i<N;i++){
            W=a[i];
            i++;
            if(W>a[b]){
                W=a[b];
            b=i;
            break;
            }
        }
    }


    cout << abs(W-Z) <<endl;


}