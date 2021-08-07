/*************************************************************************
	> File Name: src/xue.kaikeba.com/3.palindrome.c
	> Author: potatoHan
	> Mail: tinyPotato5313@outlook.com
	> Created Time: 2021年08月07日 星期六 10时40分19秒
 ************************************************************************/

#include <stdio.h>

int isPalindrome(int x) {
    if (__builtin_expect(!!(x < 0), 0)) return 0;
    int y = 0, z = x;
    while (x) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    return z == y;
}

int main(int argc, char** args)
{
    int n;
    scanf("%d", &n);
    printf("%d %s palindrome!\n", n, isPalindrome(n) ? "is" : "isn't" );
    
    return 0;
}
