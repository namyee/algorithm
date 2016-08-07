//
//  main.cpp
//  b1158
//
//  Created by 김남이 on 2016. 8. 5..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

queue<int> que;
int arr[10000];
int a=0;

int main(){
    int N=0,M=0,num=0, len=0;
    cin>>N>>M;
    
    for(int i=1;i<=N;i++){
        que.push(i);
    }
    while(que.size()){
        for(int i=0;i<M-1;i++){
            num=que.front();
            que.pop();
            que.push(num);
        }
        num=que.front();
        que.pop();
        arr[a++]=num;
    }
    cout<<'<';
    for(int i=0;i<N;i++){
        if(i==N-1){
            cout<<arr[i];
        }
        else{
            cout<<arr[i]<<','<<' ';
        }
    }
    cout<<'>'<<endl;
    
    return 0;
}