#include <stdio.h>

/* #define OPENSSL_FIPS 1 */

int main(int argc, char *argv[])
{
    int a = 0;
    int b = 0;

#ifdef OPENSSL_FIPS
    a = 1;
#else
    a = 2;
#endif

#if defined(FOO)
    b = 1;
#elif defined(OPENSSL_FIPS)
    b = 2;
#else
    b = 3;
#endif
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
