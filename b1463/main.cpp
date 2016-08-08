//
//  main.cpp
//  b1463
//
//  Created by 김남이 on 2016. 8. 8..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
using namespace std;

int d[1111111];

int go(int n){
    if(n==1){
        return 0;
    }
    if(d[n]>0){
        return d[n];
    }
    d[n]=go(n-1)+1;
    if(n%2==0){
        int temp=go(n/2)+1;
        if(d[n]>temp){
            d[n]=temp;
        }
    }
    if(n%3==0){
        int temp=go(n/3)+1;
        if(d[n]>temp){
            d[n]=temp;
        }
    }
    return d[n];
}

int main(){
    
    int num=0;
    
    cin>>num;
    
    cout<<go(num)<<endl;
    
    return 0;
}