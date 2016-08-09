//
//  main.cpp
//  b11727
//
//  Created by 김남이 on 2016. 8. 8..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
using namespace std;

int d[1111];

int go(int n){
    if(n==1||n==0){
        return d[n];
    }
    if(d[n]>0){
        return d[n];
    }
    d[n]=go(n-1)+2*go(n-2);
    d[n]%=10007;
    
    return d[n];
}
int main(){
    int num=0;
    d[0]=d[1]=1;
    cin>>num;
    cout<<go(num)<<endl;
    return 0;
}
