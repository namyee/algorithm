//
//  main.cpp
//  b2178
//
//  Created by 김남이 on 2016. 7. 31..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)
using namespace std;

int map[111][111];
int visited[111][111];
int addX[4]={1,-1,0,0};
int addY[4]={0,0,1,-1};
int N=0,M=0;
int aa=0, bb=0;
int dfs(int a, int b);

int main(){
    cin>>N>>M;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            scanf("%1d",&map[i][j]);
        }
    }
    visited[1][1]=1;
    dfs(1,1);
    
    printf("%d\n", visited[N][M]);
    
    return 0;
}
int dfs(int a, int b){
    if(map[a][b]==0){
        return 0;
    }
    for(int i=0;i<4;i++){
        aa=a+addX[i];
        bb=b+addY[i];
        if(aa<1||bb<1||aa>N||bb>M||map[aa][bb]==0){
            continue;
        }
        if((map[aa][bb]==1&&visited[aa][bb]==0)||(visited[aa][bb]!=0&&visited[aa][bb]>visited[a][b]+1)){
            visited[aa][bb]=visited[a][b]+1;
            dfs(aa,bb);
        }
    }
    return 0;
}


