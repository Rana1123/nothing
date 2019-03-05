#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h=1,X=1,Y=1,Z=1;
    for(h=1;;h=1,X=1,Y=1,Z=1)
    {
        scanf("%lf",&a);
        if(a<0 || a>10)
        {
            printf("nota invalida\n");
            continue;
        }
        while(X==1)
        {
            scanf("%lf",&b);
            if(b<0 || b>10)
            {
                printf("nota invalida\n");
                continue;
            }
            X+=2;
        }
        c=(a+b)/2.0;
        printf("media = %.2lf\n",c);
        printf("novo calculo (1-sim 2-nao)\n");
        while(Y==1)
        {
            scanf("%lf", &g);
            if(g<1 || g>2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            }
            Y+=2;
        }
        if(g==2)
            break;
    }
    return 0;
}
