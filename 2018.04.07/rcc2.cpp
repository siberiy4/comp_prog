#include<bits/stdc++.h>
using namespace std;

int main(){

    int A,B,C;
    int max,mid,min;
    int ans=0;
    int tmp;

    cin>>A>>B>>C;
    
    if(A>B&&B>C){
        max=A;
        mid=B;
        min=C;
    }else if(A>C&&B<C){
        max=A;
        mid=C;
        min=B;
    }else if(B>A&&A>C){
        max=B;
        mid=A;
        min=C;
    }else if(B>C&&A<C){
        max=B;
        mid=C;
        min=A;
    }else if(C>A&&A>B){
        max=C;
        mid=A;
        min=B;
    }else if(C>B&&B>A){
        max=C;
        mid=B;
        min=A;
    }


    while(max!=mid||mid!=min||max!=min){
        if(mid>=min+2){
            min+=2;
            ans++;
        }else if(max>=mid+2){
            mid+=2;
            ans++;
        }else if(max==mid){
            min++;
            max++;
            ans++;
        }else{
            mid++;
            min++;
            ans++;
        }

        if(mid<min){
            swap(mid,min);
        }
        if(max<mid){
            swap(max,mid);
        }
        if(mid<min){
            swap(mid,min);
        }
    }

    cout<<ans<<endl;
}