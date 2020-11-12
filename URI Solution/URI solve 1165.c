#include<stdio.h>
int main()
{
    int n,a,b=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=1,b=0;j<a;j++)
        {
            if(a%j==0)
            {
                b=b+j;
            }
        }
        if(b==1)
        {
            printf("%d eh primo\n",a);
        }
        else
        {
            printf("%d nao eh primo\n",a);
        }
    }
}
