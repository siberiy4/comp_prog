#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int sec=0,min=0,hou=0;

    cin>>sec;

    hou=sec/(60*60);sec%=(60*60);
    min=sec/60;sec%=60;

    printf("%02d:%02d:%02d\n",hou,min,sec);
}