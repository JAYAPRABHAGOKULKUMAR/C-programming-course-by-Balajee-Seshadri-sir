/*Compare two strings
Function Name: strcomp(src, dst)*/
#include <stdio.h>

int strcomp(char src[], char dst[]) {
    int i = 0;
    while(src[i] != '\0' && dst[i] != '\0') {
        if(src[i] != dst[i])
            return 0;
        i++;
    }
    return (src[i] == dst[i]);
}

int main() {
    char s1[] = "test";
    char s2[] = "test";

    if(strcomp(s1, s2))
        printf("Success");
    else
        printf("Failure");

    return 0;
}
