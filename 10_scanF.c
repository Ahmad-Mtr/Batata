#include <stdio.h>

int main() {
    int age, wage;
    char gender;
    printf("plzz Input your age, wage, gender:\n");

    scanf("%d", &age );
    scanf("%d", &wage);
    scanf("%c", &gender);

    printf("age : %d, wage: %d, gender: %c", age, wage, gender);
    return 0;
}
