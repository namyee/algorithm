//
//  main.cpp
//  b11655
//
//  Created by 김남이 on 2016. 8. 7..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char arr[111];

int main(){
    
    int len=0, num=0;
    
    fgets(arr,111,stdin);
    len=strlen(arr);
    
    for(int i=0;i<len;i++){
        if(arr[i]>='a'&&arr[i]<='z'){
            num=arr[i]+13;      //z에 13을 더하면 아스키코드 범위밖이어서
            if(num>'z'){
                arr[i]='a'+(num-'z'-1);
            }
            else{
                arr[i]=num;
            }
        }
        else if(arr[i]>='A'&&arr[i]<='Z'){
            arr[i]=arr[i]+13;
            if(arr[i]>'Z'){
                arr[i]='A'+(arr[i]-'Z'-1);
            }
        }
    }
    for(int i=0;i<len;i++){
        cout<<arr[i];
    }cout<<endl;
    return 0;
}
