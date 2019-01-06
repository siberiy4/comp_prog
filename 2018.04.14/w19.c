#include <stdio.h>

/* (1) 大域変数の定義 */
int gData[100];                        /* 入力データの格納用配列 */
int gNum=0;         /* 入力データの個数 */

/* 関数原型宣言 */
int inputData(void);
void printData(void);
void sort(void);

/* (2) calcmax関数の関数原型宣言を追加する */

/* (3) 標準入力よりデータを入力し，配列 gData に格納する */
int inputData(void) {
  int x,i;
  i=0;
  while (scanf("%d", &x) != EOF) {
    gData[i] = x;
    i++;
  }
gNum=i;
  return 0;
}

/*********** 次の行から修正しない       **********/
/* 配列 gData に格納された gNum 個のデータを出力する */
void printData(void) {
  int i;

  for (i = 0; i < gNum; i++) {
    printf("%2d ", gData[i]);
  }
  printf("\n");
}

/* 入力データの合計を計算する */

void sort(void){
        int k,j,min,tmp;
        k=0;
        tmp=0;
        min=0;
        for(k=0;k<gNum-1;k++){
                for(j=k;j<gNum;j++){ 
                        if(gData[min]>gData[j]){
                                min=j;
                        }
                }
                tmp=gData[k];
                gData[k]=gData[min];
                gData[min]=tmp;
        printData();
        }


}
/*********** ここまでの行は修正しない **********/

int main(void) {
  int i,s,min;

  inputData();                  /* データを入力する */
  printData();  /* 入力したデータを出力する */
  sort();

 return 0;
}