#include <iostream>  // 入出力ストリームを利用
#include <vector>    // vectorを利用
#include <algorithm> // sortを利用
using namespace std; // std名前空間を利用

// 木の定義
struct Tree {
    int value;          // ノードが持っている値
    vector<Tree> edges; // エッジ
};
Tree gen_tree() {
    Tree a, b, c, d, e, f, g, h, i, j;
    
    e.value = 500;
    f.value = 600;

    g.value = 700;
    h.value = 800;

    i.value = 900;
    j.value = 1000;

    b.value = 200;
    vector<Tree> b_edges = {e, f};
    b.edges = b_edges;

    c.value = 300;
    vector<Tree> c_edges = {g, h};
    c.edges = c_edges;

    d.value = 400;
    vector<Tree> d_edges = {i, j};
    d.edges = d_edges;

    a.value = 100;
    vector<Tree> a_edges = {b, c, d};
    a.edges = a_edges;
    
    return a;
}
vector<int> linear_search(vector<int> v){
    for(auto &x: v){
                x=x*2;
    }
    return v;
}
//深さ優先のやつ
void searchBy(int n, Tree tree){
    if(tree.value == n)
        cout << "Found!" << endl;
    for(Tree edge: tree.edges)
        searchBy(n, edge);
}

void printall(Tree tree){
    for(Tree edge: tree.edges){
        printall(edge);
        cout << edge.value << endl;}
}
//TREEをゼロにする
void zerozero(Tree &tree){
    for(auto &p: tree.edges){
        p.value=0;
    zerozero(p);  //下の下の階まで行くように
    }

}

vector<int> mainasu(vector<int> v){
   for(auto &y: v){
        y=y-1;
    }
return v;
}


int main() {
    vector<int> v={1,2,3,4,5};
    // v = linear_search(v);

    // for (int i:v){
    //     cout << i << endl;
    // }

    Tree tree = gen_tree();
    searchBy(5, tree);

    printall(tree);

    zerozero(tree);
    printall(tree);
    // v=mainasu(v);
    // for(int p:v){
    //     cout << p <<endl;
    // }

    // for(int q:Tree tree){

    // }
}