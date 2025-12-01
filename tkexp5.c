
#include <stdio.h>

int fact_rec(int n) {
    //TALHA KHAN
    if (n == 0)
        return 1;
    return n * fact_rec(n - 1);
}

int fact_iter(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial (Iterative) = %d\n", fact_iter(n));
    printf("Factorial (Recursive) = %d\n", fact_rec(n));

    return 0;
}
