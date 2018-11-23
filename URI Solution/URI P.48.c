#include<stdio.h>

int main()
{
    double x,y,z;

    scanf("%lf",&x);

    if(x<=400 && x>0)
    {
          z=x*15/100;
          y=x+z;
          printf("Novo salario: %0.2lf\n",y);
          printf("Reajuste ganho: %0.2lf\n",z);
          printf("Em percentual: 15 %%\n");
    }

    else if(x>400 && x<=800)
    {
        z=x*12/100;
          y=x+z;
          printf("Novo salario: %0.2lf\n",y);
          printf("Reajuste ganho: %0.2lf\n",z);
          printf("Em percentual: 12 %%\n");
    }

    else if(x>800  && x<=1200)
    {
         z=x*10/100;
          y=x+z;
          printf("Novo salario: %0.2lf\n",y);
          printf("Reajuste ganho: %0.2lf\n",z);
          printf("Em percentual: 10 %%\n");
    }

    else if(x>1200  && x<=2000)
    {
         z=x*7/100;
          y=x+z;
          printf("Novo salario: %0.2lf\n",y);
          printf("Reajuste ganho: %0.2lf\n",z);
          printf("Em percentual: 7 %%\n");
    }
    else if(x>2000)
    {
         z=x*4/100;
          y=x+z;
          printf("Novo salario: %0.2lf\n",y);
          printf("Reajuste ganho: %0.2lf\n",z);
          printf("Em percentual: 4 %%\n");
    }
}
