//
//  main.cpp
//  b11052
//
//  Created by 김남이 on 2016. 8. 9..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
using namespace std;

int d[1111];
int p[11111];
int num=0;
int go(int n){
    if(n==0){
        return d[n];
    }
    if(d[n]>0){
        return d[n];
    }
    for(int i=1;i<=n;i++){
        num=go(n-i)+p[i];
        if(d[n]<num){
            d[n]=num;
        }
    }
    return d[n];
}

int main(){
    int count=0;
    d[0]=0;
    cin>>count;
    for(int i=1;i<=count;i++){
        cin>>num;
        p[i]=num;
    }
    cout<<go(count)<<endl;
    return 0;
}

