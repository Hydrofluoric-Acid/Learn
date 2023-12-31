#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

void newcopy(char* news, char* old) {
    for (char *i=old; i < strlen(old)+old; i++) {//通过指针进行操作
        if (*i >= 'a' && *i<='z') {
            continue;
        }else {
            *news = *i;
            news++;//news指针自增
        }
    }
    *news = '\0';
}
int main() {
    char old[] = "aBcDeFgHiJkLmNoPQrStUvWxYz";//定义字符
    char news[100] = "";
    newcopy(news, old);
    printf("%s", news);
    return 0;
}

