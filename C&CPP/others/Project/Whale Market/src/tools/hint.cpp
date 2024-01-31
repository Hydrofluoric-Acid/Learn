#include "../../include/tools/hint.h"
#include "../../include/tools/color.h"

static const char* SUCCESS="\t\t*** Operation Successful! ***";
static const char* FAIL="\t\t*** Operation Failed! ***";
static const char* ILLEGAL="\t\t *** Illegal Input! ***";
static const char* LOADING="\t\t*** Loading ... ***";
static const char* EXITING="\t\t*** Exiting ... ***";

void successMessage(){
    printf("%s%s%s\n",FRONT_GREEN,SUCCESS,RESET);
}
void failMessage(){
    printf("%s%s%s\n",FRONT_RED,FAIL,RESET);
}
void illegalMessage(){
    printf("%s%s%s\n",FRONT_RED,ILLEGAL,RESET);
}
void loadingMessage(){
    printf("%s%s%s\n",FRONT_BLUE,LOADING,RESET);
}
void exitingMessage(){
    printf("%s%s%s\n",FRONT_RED,EXITING,RESET);
}