#include <iostream>
#include<string>
#include<set>

using namespace std;

int main(){
    string s;
    int k,count=0;
    cout << "a" << endl;

    set<string> a;


    cin >>s;
    cin >>k;

    a.insert(s);

    for(int i=0;i<s.size();i++){
        for(int j=i+i;j<i+k;j++){
            count++;
        }

    }
    cout <<count<<endl;
}