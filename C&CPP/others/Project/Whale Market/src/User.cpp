#include "Whale Market\include\User.h"

User::User(std::string user_name, std::string password) {
    user_name = user_name;
    password = password;
}
void User::writeIn() {
    std::fstream out;
    std::string data = user_name + " " + password;
    out << data << std::endl;
    out.close();
}

void UserLogin() {
    printf("================================================================================\n");
    printf("1.查看所有商品 2.搜索商品 3.查看所有订单 4.查看所有用户 5.删除用户 6.下架商品 7.注销");
    printf("================================================================================\n");
}