#include<stdio.h>

int main()
{
    int a,b,sum=0,i;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("%d\n",sum);

    }
    else if(a>b)
    {
         for(i=b+1;i<a;i++)
        {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        }
        printf("%d\n",sum);

    }
    else
    {
         for(i=a+1;i<b;i++)
        {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        }
        printf("%d\n",sum);

    }
}
