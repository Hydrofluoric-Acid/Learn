#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "md5.h"

int main(int argc, char **argv) {
    if(argc==1) {
        printf("Usage:\n\tmain.exe -f file ...\n\tmain.exe string ...");
        return 0;
    }else{
        std::cout<<md5(100);
    }
    system("pause");
    return 0;
}