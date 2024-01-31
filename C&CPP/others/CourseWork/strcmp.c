#include <stdio.h>

int Str_Cmp(char a1[], char a2[]) {
    int lenA = 0, lenB = 0;
    while (a1[lenA++] != '\0');
    while (a2[lenB++] != '\0');
    if (lenA < lenB) {
        return -1;
    } else if (lenA > lenB) {
        return 1;
    } else {
        for (int i = 0; i < lenA; i++) {
            if (a1[i] == a2[i]) {
                continue;
            } else if (a1[i] < a2[i]) {
                return -1;
            } else {
                return 1;
            }
        }
        return 0;
    }
}
int main() {
    char a1[20], a2[20];
    scanf("%s %s", a1, a2);
    printf("%d", Str_Cmp(a1, a2));
    return 0;
}