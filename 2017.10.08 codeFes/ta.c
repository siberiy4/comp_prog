#include<stdio.h>

int main(void){

    int h, w, bmi;

    printf("身長（単位:cm）の入力：");
    scanf("%d",&h);
    printf("体重（単位:㎏）の入力：");
    scanf("%d",&w);

    bmi = (double)(w/(h*h));

    printf("あなたのBMI指数は%.1fです。\n",bmi);

    if(30.0>bmi){

        if(25>bmi){

            if(18.5>bmi){
                
                printf("肥満度は、やせです。\n");
                
            }
            else{
                
                printf("肥満度は、標準です。\n");                
            
            }
        }
        else{
            
            printf("肥満度は、肥満です。\n");        
        
        }
   
    }

    else{
        printf("肥満度は、過度肥満です。\n");
        
    }
    
    return 0;


}