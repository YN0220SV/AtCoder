#include <stdio.h>  // scanf
#include <string.h> // strchr

int main(void)
{
    char c[100] = "";
    int n, a, k = 0;
    scanf("%d", &n);
    while (--n >= 0)
    {
        scanf("%d", &a);
        if (!strchr(c, a + 1))
            c[k++] = a + 1;
    }
    printf("%d\n", k);
}