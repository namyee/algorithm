//
//  main.cpp
//  b9012
//
//  Created by 김남이 on 2016. 8. 4..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
#pragma warning(disable:4996)
using namespace std;

stack<char> st;

int main(){
    int count=0, len=0;
    string a;
    
    cin>>count;
    
    for(int i=0;i<count;i++){
        cin>>a;
        len=a.size();
        for(int j=0;j<len;j++){
            if(a[j]=='('){
                st.push('(');
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    st.push('(');
                    break;
                }
            }
        }
        if(st.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
            while(!st.empty()){
                st.pop();
            }
        }
        
    }
    return 0;
}