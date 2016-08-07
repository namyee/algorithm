//
//  main.cpp
//  b10799
//
//  Created by 김남이 on 2016. 8. 4..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

stack<char> st;

int main(){
    string a;
    int len=0, num=0;
    
    cin>>a;
    len=a.size();
    for(int i=0;i<len;i++){
        if(a[i]=='('){
            st.push('(');
        }
        else{
            if(a[i-1]=='('){
                st.pop();
                num+=st.size();
            }
            else{
                st.pop();
                num+=1;
            }
        }
    }
    cout<<num<<endl;
    
    return 0;
}

