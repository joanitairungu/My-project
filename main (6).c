#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a=0;
    while (a<=100)
    {
        printf("%d  degrees F= %d degrees C\n",a, (a-32)*5/9);
        a=a+10;

    }
    return 0;
}
