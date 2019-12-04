//
// Created by fpf on 2019-12-04.
//

#include "stdio.h"

int main(void){
    char ch;

    printf("请输入字符：");
    while ((ch=getchar())!='#'){
        putchar(ch);
    }

    printf("程序以#退出");

    return 0;
}