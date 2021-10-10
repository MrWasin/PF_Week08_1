#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int count = 0;
    char str[50], * p, Dstr;
    p = str;

    scanf("%s\n", &str);
    scanf("%c", &Dstr);

    while (*p != '\0') {
        count++;
        p++;
    }

    for (int i = 0; i <= count; i++) {
        if (str[i] != Dstr) {
            printf("%c", str[i]);
        }
    }

    return 0;
}