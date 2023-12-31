#include <stdio.h>
#include <string.h>
int hex(char s[200])
{
int sum=0,positionalRights=1,digits;
char digit;
    for (int i = 0; i < strlen(s); i++)
    {
        digit=s[i];
        switch (digit)
        {
            case '0': digits = 0; break;
            case '1': digits = 1; break;
            case '2': digits = 2; break;
            case '3': digits = 3; break;
            case '4': digits = 4; break;
            case '5': digits = 5; break;
            case '6': digits = 6; break;
            case '7': digits = 7; break;
            case '8': digits = 8; break;
            case '9': digits = 9; break;
            case 'a': case 'A': digits = 10; break;
            case 'b': case 'B': digits = 11; break;
            case 'c': case 'C': digits = 12; break;
            case 'd': case 'D': digits = 13; break;
            case 'e': case 'E': digits = 14; break;
            case 'f': case 'F': digits = 15; break;
        }
sum+=digits*positionalRights;//展开每位
positionalRights*=16; //更新位权
    }
    return sum;
}
int main()
{
    char a[200];
    scanf("%s",a);
    printf("%d",hex(a));
    return 0;
}
