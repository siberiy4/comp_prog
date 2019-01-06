#include <bits/stdc++.h>
using namespace std;
int main(){
    int b = 1;
    cin >> b;
    while(b != 0){
    long tmp = 0;
    int flag = 0;

size_t a;
size_t n;
    for(a = 1; a <= b; a++)
    {
        for(n = 1; tmp <= b; n++)
        {
            tmp = (n * ((2 * a) + n - 1))/2;
            //cout << "a= " << a << " n= " << n << " tmp= " << tmp << endl;
            if(tmp == b){
                flag = 1;
                break;
            }
        }
        
        if (flag == 1) {
            //cout<< "hoge"<< endl;
            break;
        }

        tmp = 0;
        
        
    }
    cout << a <<" " << n << endl;
    cin >> b;
    }

} 