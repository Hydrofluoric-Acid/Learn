/* （1）自定义一个具有字符串替换功能的函数；
（2）使用for循环从指定位置遍历字符串“Good morning”；
（3）用字符串“evening”中的字符逐一替换掉字符串“Good morning”中“morning”子串；
（4）主函数中调用字符串替换函数；
（5）最后将替换后的字符串输出到屏幕上。 */
#include <stdio.h>

char *replaceStr(char *str,char *str_d,int start);
int main(){
    char str[]="Good morning";
    char str_d[]="evening";
    int start=5;
    printf("%s",replaceStr(str,str_d,start));
}
char *replaceStr(char *str,char *str_d,int start){
    int i=0,j;
    for(j=start;str[j]!='\0';j++){
        if(str_d[i]!='\0'){
            str[j]=str_d[i];
            i++;
        }else{
            break;
        }
    }
    return str;
}