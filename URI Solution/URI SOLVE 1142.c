#include <stdio.h>
int main()
{
    int n, i,j,a=1,b=4;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=a;j<=b;j++)
        {
            if(j%4==0)
                printf("PUM\n");
            else
                printf ("%d ",j);
        }
        a=a+4;
        b=b+4;
    }
    return 0;
}


