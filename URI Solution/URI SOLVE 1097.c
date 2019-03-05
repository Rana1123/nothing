#include <stdio.h>
int main()
{
    int i,j,x=7,y;
    for(i=1;i<=9;i=i+2)
    {
        for(y=1,j=x;y<=3;j--,y++)
            printf("I=%d J=%d\n", i, j);
        x=x+2;
    }
    return 0;
}


