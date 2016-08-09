//
//  main.cpp
//  b10866
//
//  Created by 김남이 on 2016. 8. 7..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;

deque<int> deq;

int main(){
    int count=0, num=0;
    string a;
    
    cin>>count;
    
    for(int i=0;i<count;i++){
        cin>>a;
        if(a=="push_front"){
            cin>>num;
            deq.push_front(num);
        }
        else if(a=="push_back"){
            cin>>num;
            deq.push_back(num);
        }
        else if(a=="pop_front"){
            if(deq.size()!=0){
                cout<<deq.front()<<endl;
                deq.pop_front();
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(a=="pop_back"){
            if(deq.size()!=0){
                cout<<deq.back()<<endl;
                deq.pop_back();
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(a=="size"){
            cout<<deq.size()<<endl;
        }
        else if(a=="empty"){
            cout<<deq.empty()<<endl;
        }
        else if(a=="front"){
            if(deq.size()!=0){
                cout<<deq.front()<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(a=="back"){
            if(deq.size()!=0){
                cout<<deq.back()<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}