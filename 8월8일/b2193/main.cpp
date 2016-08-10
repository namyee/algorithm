//
//  main.cpp
//  b2193
//
//  Created by 김남이 on 2016. 8. 10..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
using namespace std;

long long d[1111];
int num=0;

long long go(int n){
    if(n==0||n==1||n==2){
        return d[n];
    }
    if(d[n]>0){
        return d[n];
    }
    d[n]=go(n-1)+go(n-2);
    return d[n];
}
int main(){
    d[0]=0;
    d[1]=d[2]=1;
    cin>>num;
    cout<<go(num)<<endl;
    return 0;
}
