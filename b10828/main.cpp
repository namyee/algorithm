//
//  main.cpp
//  b10828
//
//  Created by 김남이 on 2016. 8. 4..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stack>
#pragma warning(disable:4996)
using namespace std;

stack<int> st;

int main(){
    string a;
    int num=0;
    int count=0;
    cin>>count;
    for(int i=0;i<count;i++){
        cin>>a;
        if(a=="push"){
            cin>>num;
            st.push(num);
        }
        else if(a=="pop"){
            if(!st.empty()){
                cout<<st.top()<<endl;
                st.pop();
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(a=="top"){
            if(!st.empty()){
                cout<<st.top()<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(a=="size"){
            cout<<st.size()<<endl;
        }
        else if(a=="empty"){
            cout<<st.empty()<<endl;
        }
    }
    
    return 0;
}
/*
int stack[11111];
int size=0;
int num=0;

void push(){
    cin>>num;
    stack[size++]=num;
}
int pop(){
    if(size==0){
        return -1;
    }
    return stack[--size];
}
int top(){
    if(size==0){
        return -1;
    }
    return stack[size-1];
}
int empty(){
    if(size==0){
        return 1;
    }
    return 0;
}
int main(){
    int count=0;
    string a;
    cin>>count;
    
    for(int i=0;i<count;i++){
        cin>>a;
        if(a=="push"){
            push();
        }
        else if(a=="pop"){
            cout<<pop()<<endl;
        }
        else if(a=="top"){
            cout<<top()<<endl;
        }
        else if(a=="size"){
            cout<<size<<endl;
        }
        else if(a=="empty"){
            cout<<empty()<<endl;
        }
    }
    
    return 0;
}
*/