//
//  main.cpp
//  b10820
//
//  Created by 김남이 on 2016. 8. 7..
//  Copyright © 2016년 김남이. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#pragma warning(disable:4669)
#include <string.h>
using namespace std;

char input[111];
int capital_letter=0;
int small_letter=0;
int num_letter=0;
int blank=0;
int flag=0;

int main(){
    int len=0;
    //while(fgets(input,111,stdin)){
    for(int i=0;i<100;i++){
        fgets(input,111,stdin);
        if(feof(stdin)) break;
        len=strlen(input);
        for(int j=0;j<len;j++){
            if(input[j]==' '){
                blank++;
            }
            else if(input[j]>='a'&&input[j]<='z')
            {
                small_letter++;
            }
            else if(input[j]>='A'&&input[j]<='Z')
            {
                capital_letter++;
            }
            else if(input[j]>='0'&&input[j]<='9')
            {
                num_letter++;
            }
        }
        cout<<small_letter<<' '<<capital_letter<<' '<<num_letter<<' '<<blank<<endl;
        small_letter=0;
        capital_letter=0;
        num_letter=0;
        blank=0;
    }
    
    return 0;
}