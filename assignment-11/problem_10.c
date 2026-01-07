/*Concatenate two strings
Function Name: strcon(src1, src2, dst)*/
#include <stdio.h>

void strcon(char src1[], char src2[], char dst[]) {
    int i = 0, j = 0;

    while(src1[i] != '\0') {
        dst[i] = src1[i];
        i++;
    }

    while(src2[j] != '\0') {
        dst[i++] = src2[j++];
    }

    dst[i] = '\0';
}

int main() {
    char s1[] = "Hello ";
    char s2[] = "World";
    char result[30];

    strcon(s1, s2, result);
    printf("%s", result);

    return 0;
}
