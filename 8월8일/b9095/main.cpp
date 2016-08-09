//
//  main.cpp
//  b9095
//
//  Created by 김남이 on 2016. 8. 9..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
using namespace std;

int num=0;
int d[20];

int go(int n){
    if(n==1||n==2||n==0){
        return d[n];
    }
    if(d[n]>0){
        return d[n];
    }
    d[n]=go(n-1)+go(n-2)+go(n-3);
    return d[n];
}

int main(){
    
    int count=0;
    cin>>count;
    
    d[0]=d[1]=1;
    d[2]=2;
    
    for(int i=0;i<count;i++){
        cin>>num;
        cout<<go(num)<<endl;
    }
    
    return 0;
}