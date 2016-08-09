//
//  main.cpp
//  b10808
//
//  Created by 김남이 on 2016. 8. 7..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string input;
int arr[100];

int main(){
    int len;
    cin>>input;
    len=input.size();
    
    for(int i=0; i<len;i++){
        for(int j='a';j<='z';j++){
            if(input[i]==j){
                arr[j-97]++;
                break;
            }
        }
    }
    for(int j='a';j<='z';j++){
        cout<<arr[j-97]<<' ';
    }
    cout<<endl;
    
    return 0;
}
