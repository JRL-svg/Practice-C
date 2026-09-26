#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a == 0 && b == 0) {
        printf("LCM = 0\n");
        return 0;
    }

    printf("LCM = %d\n", (a / gcd(a, b)) * b);
    return 0;
}
