#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,k,t=0;
    vector<int> a(N+1);
    vector<int> b(k);


    cin>>N;
    cin >>a[0];
    b[0]=a[0];
	for(int i=1;i<N;i++){ 
        cin >>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());

    for(int i=0;i<N;i++){
        for(int j=0;j<;j++){
            if(a[i]==b[j]){
                a[i]=j;
            }
        }
    }
 
    for(int i=0;i<N;i++){
	    cout << a[i] << endl;
    }

}
