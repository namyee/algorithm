//
//  main.cpp
//  b2667
//
//  Created by 김남이 on 2016. 8. 1..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <algorithm>
#pragma warning(disalbe:4996)
using namespace std;

int map[111][111];
int visited[111][111];
int arr[700];
int addX[4]={1,-1,0,0};
int addY[4]={0,0,1,-1};
int N=0, sum=0, aa=0, bb=0,sum2=0;

int dfs(int a, int b){
    if(map[a][b]==0){
        return 0;
    }
    for(int i=0;i<4;i++){
        aa=a+addX[i];
        bb=b+addY[i];
        if(aa<1||bb<1||aa>N||bb>N||map[aa][bb]==0){
            continue;
        }
        if((map[aa][bb]==1&&visited[aa][bb]==0)||(visited[aa][bb]!=0&&visited[aa][bb]>visited[a][b]+1)){
            visited[aa][bb]=visited[a][b];
            dfs(aa,bb);
        }
    }
    return 0;
}

int main(){
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            scanf("%1d", &map[i][j]);
        }
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(map[i][j]==1&&visited[i][j]==0){
                visited[i][j]=++sum;
                dfs(i,j);
            }
        }
    }
    cout<<sum<<endl;
    for(int a=0;a<sum;a++){
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                if(visited[i][j]==a+1){
                    sum2++;
                }
            }
        }
        arr[a]=sum2;
        sum2=0;
    }
    sort(arr,arr+sum);
    for(int i=0;i<sum;i++){
        cout<<arr[i]<<endl;
    }
    
    
    
    return 0;
}
