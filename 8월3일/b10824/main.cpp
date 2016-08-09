//
//  main.cpp
//  b10824
//
//  Created by 김남이 on 2016. 8. 8..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

string a;
string b;
long long num1=0, num2=0;

int main(){
    
    cin>>a>>b;
    
    a=a+b;
    
    //cout<<a;
    num1=stoll(a);
    //cout<<num1;
    
    cin>>a>>b;
    a+=b;
    
    num2=stoll(a);
    
    cout<<num1+num2<<endl;
    
    return 0;
}
