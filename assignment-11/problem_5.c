/*Copy integers from one location to another
Function Name: memcopy(src, dst, size)*/

#include <stdio.h>

void memcopy(int src[], int dst[], int size) {
    for(int i = 0; i < size; i++) {
        dst[i] = src[i];
    }
}

int main() {
    int src[3] = {1, 2, 3};
    int dst[3];

    memcopy(src, dst, 3);

    for(int i = 0; i < 3; i++) {
        printf("%d ", dst[i]);
    }

    return 0;
}
