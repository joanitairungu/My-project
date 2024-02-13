#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;
    printf ("Enter first value");
    scanf ("%d", &a);
    printf ("Enter second value");
    scanf ("%d", &b);
    printf ("Enter third value");
    scanf ("%d", &c);
    while (a <= c);
    {
        printf ("%4d degrees F = %4d degrees C\n",
                a, (a-32)* 5/9);
                a=a+10;
    }
    return 0;
}
