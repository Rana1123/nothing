#include <stdio.h>
int main()
{
    int x, n, i,a=0;
    scanf("%d %d", &x, &n);
    while(n<=0)
    {
         scanf("%d", &n);

    }
    for(i=1; i<=n; i++)
    {
        a=a+x;
        x++;
    }
    printf("%d\n",a);


}

