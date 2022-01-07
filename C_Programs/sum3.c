#include <stdio.h>

int main() {

    int n1, n2, n3, total;
    printf("Enter the first integer:");
    scanf("%d", &n1);
    printf("Enter the second integer:");
    scanf("%d", &n2);
    printf("Enter the third integer:");
    scanf("%d", &n3);
    total = n1 + n2 + n3;
    printf("%d + %d +%d = %d\n", n1, n2, n3,total);
    return 0;
}
