//
//  main.cpp
//  b11656
//
//  Created by 김남이 on 2016. 8. 8..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <algorithm>    //sort를 쓰려면 반드시!
#include <string.h>
using namespace std;

string input;
string a[1111];
int main(){
    
    int len=0;
    
    cin>>input;
    len=input.size();
    int j=len;
    
    for(int i=0;i<len;i++){
            a[i]=input.substr(i,j--);
    }
    
    sort(a,len+a);
    
    for(int i=0;i<len;i++){
        cout<<a[i]<<endl;
    }
    
    return 0;
}