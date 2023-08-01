#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 1;

    a = 2;
    printf("Hello 1!\n");
    a = 3;
    printf("Hello 2! (a: %d)\n", a);

    return 0;
}
