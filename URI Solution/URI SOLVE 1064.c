#include<stdio.h>
int main()
{
    double a,b=0,c;
    int i,count=0;

    for(i=0;i<6;i++)
    {
        scanf("%lf",&a);
        if(a>=0)
        {
            count++;
            b=b+a;
        }
    }
    c=b/count;
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",c);

}
