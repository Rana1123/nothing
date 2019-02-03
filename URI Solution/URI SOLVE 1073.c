#include <stdio.h>

int main()
{
    int i,n,a;
    scanf("%d", &n);
    for (i = 2;i <= n; i = i + 2)
    {
        a=i*i;
        printf("%d^2 = %d\n",i,a);
    }
    return 0;
}
