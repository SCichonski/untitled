#include <stdio.h>
int Policz(int a, int b);

int main(void)
{
    printf("Hello, World!\n");
    printf("w pierwszym branchu 2*3=%d\n", Policz(2,3));
    return 0;
}
int Policz(int a, int b) {
    return a * b;
}