#include <stdio.h>
//write a program that prints hello 50 times using a for loop

int main() {
    int a = 20;
    int b = 10;
    for (int i = 0; i < 30 ; ++i, a--, b++) {
        a += 2;
        b -= 2;
        if(a == b)
            break;
    }
    printf("a: %d, b: %d", a, b);
    return 0;
}