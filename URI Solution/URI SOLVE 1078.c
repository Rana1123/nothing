#include <stdio.h>
int main()
{
    int j,a,n;
    scanf("%d",&n);
    for(j = 1;j < 11;j++)
    {
        a=n*j;
        printf("%d x %d = %d\n",j,n,a);
    }
    return 0;
}

