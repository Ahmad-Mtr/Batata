#include <stdio.h>
// Find the sum from 0 to any user given value,find the sum, and then print the sum

int main() {
   int limit;
    scanf("%d", &limit);

    int sum = 0;
    for (int i = 0; i <= limit; ++i) {
        sum += i;

    }
    printf("AHmad MOhsen: %d", sum);

    return 0;
}