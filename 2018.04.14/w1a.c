#include <stdio.h>
#include<math.h>

/* (1) 大域変数の定義 */
int gData[100];                        /* 入力データの格納用配列 */
int gNum=0;         /* 入力データの個数 */

/* 関数原型宣言 */
int inputData(void);
void printData(void);
int sum(void);
double average(void);
double variance(void);

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
int sum(void) {
  int i, s = 0;

  for (i = 0; i < gNum; i++) {
    s = s + gData[i];
  }

  return s;
}
/*********** ここまでの行は修正しない **********/

double average(void) {
  int s;
  double ave;
  s=sum();
  ave=1.*s/gNum;

  return ave;
}

double variance(void){
  int i,j;
  double ss;

  ss=0;
  for(i=0;i<gNum;i++){
    ss=ss+pow(gData[i]-average(),2);
  }
  return ss/gNum;
}


int main(void) {
  int count,i;
  double ave,ss;
  i=0;
  inputData();                  /* データを入力する */
  printData();                  /* 入力したデータを出力する */
  ave=average();
  ss=variance();

  printf("標本数  %d 平均値  %.2f 標本分散 %.2f 標本標準偏差 %.2f\n",gNum,ave,ss,sqrt(ss) );

 return 0;
}