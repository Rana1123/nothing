#include <stdio.h>
int main()
{
    int i,b,c=0,x,z;
    scanf("%d", &x);
    do{
        scanf("%d", &z);
    }
    while(x>=z);
    for(i=x,b=0; b<z; i++)
    {
        b=b+i;
        c++;
    }
    printf("%d\n", c);
    return 0;
}

