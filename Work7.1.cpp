#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <Windows.h>
int main() {
    int i, a, b, tmp;
    int num[1000];
    scanf("%d %d", &a, &b);
    for (i = 0; i < a; i++) {
        scanf("%d", &num[i]);
    }
    i = 0;
    do
    {
        if (i < a - 1 && num[i] < num[i + 1])
        {
            tmp = num[i + 1];
            num[i + 1] = num[i];
            num[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }
    } while (i < a);

    printf("%d", num[b - 1]);
}