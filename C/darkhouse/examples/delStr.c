#include <stdio.h>
char *del(char s[],int pos,int len);
int main(){
    char str[50];
    int position,length;
    printf("Please input the string:\n");
    gets(str);
    printf("Please input the position you want to delete:\n");
    scanf("%d",&position);
    printf("Please input the length you want to delete:\n");
    scanf("%d",&length);
    del(str,position,length);
    printf("After deleting:\n%s\n",str);
    return 0;
}
char *del(char s[],int pos,int len){
    int i;
    for(i=pos+len-1;s[i]!='\0';i++){
        s[pos-1]=s[i];
    s[pos-1]='\0';
    return s;
    }
}