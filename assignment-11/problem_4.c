/*Two-digit odd numbers whose sum of digits is 7
Function Name: find_2digit_odd_sum7*/

#include <stdio.h>

void find_2digit_odd_sum7() {
    for(int i = 11; i < 100; i += 2) {
        int sum = (i / 10) + (i % 10);
        if(sum == 7) {
            printf("%d ", i);
        }
    }
}

int main() {
    find_2digit_odd_sum7();
    return 0;
}
