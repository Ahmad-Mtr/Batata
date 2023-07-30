#include <stdio.h>

int main() {
    int age;

    printf("plz Input your age:");
    scanf("%d", &age);

    /*if (age == 70) {
        printf("RIP");
    } else if (age == 20) {
        printf("Go Study");
    } else {
        printf("Go eat cerelac");
    }*/

    switch (age) {
        case 70:
            printf("RIP");
            break;

        default:
            printf("Go eat cerelac");
            break;
        case 20:
            printf("Go Study");
            break;

    }
    return 0;
}