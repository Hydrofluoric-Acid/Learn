#include <cstdio>
#include <cstdlib>

#include "include/tools/color.h"
#include "include/tools/hint.h"
#include "./include/User.h"

void SignUp();
void AdminLogin();
void Exit();

int main() {
    printf("==========================================\n");
    printf("1.用户登录 2.用户注册 3.管理员登录 4.退出程序\n");
    printf("==========================================\n");

    printf("输入操作：");
    int opt;
    scanf("%d", &opt);
    switch (opt) {
    case 1:
        //UserLogin();
        break;
    case 2:
        //SignUp();
        break;
    case 3:
       // AdminLogin();
        break;
    case 4:
        //Exit();
        break;
    default:
        exit(0);
    }
    printf("\n");
    system("Pause");
    successMessage();
    failMessage();
    illegalMessage();
    loadingMessage();
    exitingMessage();
    return 0;
}