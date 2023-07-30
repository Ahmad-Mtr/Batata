#include <stdio.h>
// Find the product from 0 to any user given value,find the product, and then print the product

int main() {
    int limit;
    scanf("%d", &limit);

    int product = 1;
    for (int i = 1; i <= limit; ++i) {
        product *= i;

    }
    printf("AHmad MOhsen: %d", product);

    return 0;
}