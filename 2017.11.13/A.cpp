#include <iostream>
#include <vector>

using namespace std;

int main(){
    int S, T;
    vector<int> a(4);
    vector<int> b(4);

    scanf("%d",&a[0]);  scanf("%d",&a[1]);  scanf("%d",&a[2]);  scanf("%d",&a[3]);
    scanf("%d",&b[0]);  scanf("%d",&b[1]);  scanf("%d",&b[2]);  scanf("%d",&b[3]);

    S=a[0]+a[1]+a[2]+a[3];
    T=b[0]+b[1]+b[2]+b[3];

    if(S>=T){
        cout<<S<<endl;
    }
    else{cout<<T<<endl;}
}