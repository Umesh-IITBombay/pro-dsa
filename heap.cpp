#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int *p;
    p = new int[5];
    p[0]=10;
    p[1]=15;
    p[2]=14;
    p[3]=21;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    delete []p;
} 