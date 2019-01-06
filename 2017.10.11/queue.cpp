#include <bits/stdc++.h>

using namespace std;

int main(){

    queue<string> que;
    que.push("a");
    que.push("b");
    que.push("c");

    cout << que.front() << endl;

    que.pop();
    que.pop();

    cout << que.front() << endl;

}