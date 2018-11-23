#include<stdio.h>

int main()
{
    double n[6];
    int i,count=0;

    for(i=0;i<6;i++)
    {
        scanf("%lf",&n[i]);
    }

    for(i=0;i<6;i++)
    {
        if(n[i]>0)
        {
                count++;
        }

    }
    printf("%d valores positivos\n",count);

}
