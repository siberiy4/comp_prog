#include<iostream>
#include<vector>
using namespace std;

struct Tree {
    int value;
    vector<Tree> edges;
};

int main() {
    Tree tree, a, b, c,d;
    a.value = 2;
    b.value = 3;
    c.value = 4;

    d.value=5

    vector<Tree> h={d}

    vector<Tree> v = {a, b, c};
    tree = {1, v};
    tree ={v,}
    
    cout << tree.value << endl;
    for(auto x: tree.edges) {
        cout << x.value << endl;
    }
}