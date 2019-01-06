#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

enum CardNumber {
    A=1,J=10,Q=10,K=10
};

void startdisplay(){
    cout<<"ブラックジャックゲーム"endl;
}
void InitCard(queue<string> deck){
    vector<string> card ;
    pair<int , char> spade(13,♠);
    pair<int , char> clover(13,♠);
    pair<int , char> diamond(13,♠);
    pair<int , char> heart(13,♠);


    for(int i=0;i<54;i++){
        if(i/13==0){
            if(i%13==0){
                card.push_back(♠ A);
            }else if(i%13==10){
                card.push_back(♠ J);
            }else if(i%13==11){ 
                card.push_back(♠ Q);
            }else if(i%13==12){
                card.push_back(♠ K);                
            }else{
                card.push_back(♠ i%13);
            }
        }else if(i/13==1){
            if(i%13==0){
                card.push_back(♣ i%13);
            }else if(i%13==10){

            }else if(i%13==11)[

            ]else if(i%13==12){

            }else{
                
            }
        }else if(i/13==2){
            if(i%13==0){

            }else if(i%13==10){

            }else if(i%13==11)[

            ]else if(i%13==12){

            }else{
                
            }
        }else{
            if(i%13==0){

            }else if(i%13==10){

            }else if(i%13==11)[

            ]else if(i%13==12){

            }else{
                
            }
        }
    }


}

int main(){
    queue<string> player;
    queue<string> cpu;



}


/*
スタート画面

カードの初期化関数(一回だけ)
    ＜シャッフル関数も作る

queueにシャッフルしたカードを全部入れる

プレイヤーにカードを渡す。

CPUのカードは一枚表示、一枚伏せておく

if(empty())になればシャッフルvector=>queue

プレイヤーにまだ山札から引くのか聞く

勝ち負け判定

継続の可否

*/
