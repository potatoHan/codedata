/*************************************************************************
	> File Name: src/xue.kaikeba.com/2.test.c
	> Author: potatoHan
	> Mail: tinyPotato5313@outlook.com
	> Created Time: 2021年08月07日 星期六 09时30分37秒
 ************************************************************************/

#include <stdio.h>

int main(int argc, char** args)
{
    char str[100] = { 0 };
    while (scanf("%[^\n]s", str) != EOF) {
        getchar();
        printf(" has %d chars\n", printf("%s", str));
    }
    return 0;
}
