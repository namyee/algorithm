//
//  main.cpp
//  b10845
//
//  Created by 김남이 on 2016. 8. 5..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <queue>
#include <stdio.h>
#pragma warning(disable:4996)
using namespace std;

queue<int> que;

int main(){
    int count=0, num=0;
    string a;
    cin>>count;
    for(int i=0;i<count;i++){
        cin>>a;
        if(a=="push"){
            cin>> num;
            que.push(num);
        }
        else if(a=="pop"){
            if(que.size()==0){
                cout<<-1<<endl;
            }
            else{
                cout<<que.front()<<endl;
                que.pop();
            }
        }
        else if(a=="size"){
            cout<<que.size()<<endl;
        }
        else if(a=="empty"){
            cout<<que.empty()<<endl;
        }
        else if(a=="front"){
            if(que.size()==0){
                cout<<-1<<endl;
            }
            else{
                cout<<que.front()<<endl;
            }
        }
        else if(a=="back"){
            if(que.size()==0){
                cout<<-1<<endl;
            }
            else{
                cout<<que.back()<<endl;
            }
        }
        
    }
    return 0;
}

/*
int queue[111111];
int front=0, rear=0, num=0;

void push(){
    cin>>num;
    queue[front++]=num;
}
int pop(){
    if(rear==front){
        return -1;
    }
    return queue[rear++];
}
int size(){
    if(front-rear>=0){
        return front-rear;
    }
    return 0;
}
int empty(){
    if(front==rear){
        return 1;
    }
    return 0;
}
int frontF(){
    if(front==rear){
        return -1;
    }
    return queue[rear];
}
int back(){
    if(front==rear){
        return -1;
    }
    return queue[front-1];
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
            cout<<pop()<<endl;;
        }
        else if(a=="size"){
            cout<<size()<<endl;;
        }
        else if(a=="empty"){
            cout<<empty()<<endl;
        }
        else if(a=="front"){
            cout<<frontF()<<endl;
        }
        else if(a=="back"){
            cout<<back()<<endl;
        }
    }
    
    
    return 0;
}*/
