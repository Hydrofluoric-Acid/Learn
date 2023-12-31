#include <iostream>
#include <unordered_map>
#include <string>
#include <cstdio>
#include <cstring>
#include <windows.h>
std::unordered_map<std::string, std::string> info = {{"590", "先进制造学院"}};

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(936);
    if (argc == 1) {
        printf("Usage:\n\tmain.exe -f file ...\n\tmain.exe string ...");
        return 0;
    } else if (strcmp(argv[1], "-f") == 0) {
    } else {
        int i = 1;
        while (i++ < argc) {
            if (info.find(argv[i]) != info.end()) {
                std::cout << argv[i] << ":\t" << info[argv[i]] << std::endl;
            }
        }
    }
    return 0;
}