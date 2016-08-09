//
//  main.cpp
//  b10809
//
//  Created by 김남이 on 2016. 8. 7..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string input;
int arr[100];
int num=0;

int main(){
    int len=0;
    cin>>input;
    len=input.size();
    
    for(int i=0; i<len;i++){
        for(int j='a';j<='z';j++){
            if(input[i]==j){
                if(num==0){
                    arr[j-97]=-1;
                    num++;
                    break;
                }
                else if(arr[j-97]!=0){
                    num++;
                    break;
                }
                else if(arr[j-97]!=-1){
                    arr[j-97]=num++;
                    break;
                }
            }
        }
    }
    for(int j='a';j<='z';j++){
        if(arr[j-97]==0){
            cout<<-1<<' ';
        }
        else if(arr[j-97]==-1){
            cout<<0<<' ';
        }
        else{
            cout<<arr[j-97]<<' ';
        }
    }
    cout<<endl;
    
    return 0;
}