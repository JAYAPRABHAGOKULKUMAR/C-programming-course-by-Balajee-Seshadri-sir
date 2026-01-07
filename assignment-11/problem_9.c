/*Concatenate two integer arrays
Function Name: intcon(src1, size1, src2, size2, dst)*/
#include <stdio.h>

void intcon(int src1[], int size1, int src2[], int size2, int dst[]) {
    int i;
    for(i = 0; i < size1; i++)
        dst[i] = src1[i];

    for(int j = 0; j < size2; j++)
        dst[i++] = src2[j];
}

int main() {
    int a[2] = {1, 2};
    int b[2] = {3, 4};
    int c[4];

    intcon(a, 2, b, 2, c);

    for(int i = 0; i < 4; i++)
        printf("%d ", c[i]);

    return 0;
}
