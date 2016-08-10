//
//  main.cpp
//  b10844
//
//  Created by 김남이 on 2016. 8. 10..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
using namespace std;

int d[111][111];
int num=0, sum=0;
int go(int n){
    for(int i=0;i<10;i++){
        if(i==0){
            d[n][i]=d[n-1][i+1]%1000000000;
        }
        else if(i==9){
            d[n][i]=d[n-1][i-1]%1000000000;
        }
        else{
            d[n][i]=(d[n-1][i-1]+d[n-1][i+1])%1000000000;
        }
    }
    return 0;
}
int main(){
    cin>>num;
    for(int i=1;i<=9;i++){
        d[1][i]=1;
    }
    if(num==1){
        cout<<9<<endl;
        return 0;
    }
    for(int i=2;i<=num;i++){
        go(i);
    }
    for(int i=0;i<=9;i++){
        sum+=d[num][i];
        sum%=1000000000;
    }
    cout<<sum<<endl;
    return 0;
}