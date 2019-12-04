//
// Created by fpf on 2019-12-04.
//

#include <stdio.h>

#define Name "GGATHINK, INC."
#define ADDRESS "101 xxx"
#define PLACE "AA"
#define WIDTH 40

void starbar(void);//函数原型

int main(void){
    starbar();
    printf("%s\n", Name);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();

    return 0;
}

void starbar(void){//定义函数
    int i;
    for (int i = 0; i <=WIDTH ; ++i) {
        putchar('*');
        putchar('\t');
    }
}