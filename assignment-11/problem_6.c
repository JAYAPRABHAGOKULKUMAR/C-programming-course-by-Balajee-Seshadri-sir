/*Copy a string to another
Function Name: strcopy(src, dst)*/
#include <stdio.h>

void strcopy(char src[], char dst[]) {
    int i = 0;
    while(src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

int main() {
    char src[] = "Hello";
    char dst[20];

    strcopy(src, dst);
    printf("%s", dst);

    return 0;
}
