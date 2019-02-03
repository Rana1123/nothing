#include <stdio.h>
int main()
{
    int n,i;
    double a,b,c,total,avg;
    scanf("%d",&n);
    double res[n];
    for(i = 0;i < n;i++){
    scanf("%lf %lf %lf",&a,&b,&c);
    total = a + b + c;
    avg = total / 3;
    res[i] = avg;
    }
    for(i =0;i < n;i++){
    printf("%.1lf\n",res[i]);
    }
    return 0;
}
