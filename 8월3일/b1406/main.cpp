//
//  main.cpp
//  b1406
//
//  Created by 김남이 on 2016. 8. 4..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

stack<char> st;
stack<char> st2;
char arr[111111];

int main(){
    int count, len;
    string a;
    char b;
    
    cin>>a>>count;
    
    len=a.size();
    for(int i=0;i<len;i++){
        st.push(a[i]);
    }
    
    for(int i=0;i<count;i++){
        cin>>a;
        if(a=="L"){
            if(!st.empty()){
                b=st.top();
                st.pop();
                st2.push(b);
            }
        }
        else if(a=="D"){
            if(!st2.empty()){
                b=st2.top();
                st2.pop();
                st.push(b);
            }
        }
        else if(a=="B"){
            if(!st.empty()){
                st.pop();
            }
        }
        else if(a=="P"){
            cin>>b;
            st.push(b);
        }
    }
    
    len=0;
    for(int i=0;!st.empty();i++){
        arr[i]=st.top();
        st.pop();
        len++;
    }
    
    for(int i=len-1;i>=0;i--){
        cout<<arr[i];
    }
    for(int i=0;!st2.empty();i++){
        cout<<st2.top();
        st2.pop();
    }
    cout<<endl;
    
    return 0;
}