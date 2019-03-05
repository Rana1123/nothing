#include <stdio.h>
int main()
{
    int x,y,c=0,d=0,e=0,f,g,h,i,j=0,k=0,l=0;
    while(1)
    {
        scanf ("%d%d", &x, &y);
        if(x>y) l++;
        if(x<y) k++;
        if(x==y) j++;
        c+=x;
        d+=y;
        e++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&f);
        if(f==1)
            continue;
        if(f==2)
            break;
    }
    printf("%d grenais\n",e);
    printf("Inter:%d\n",l);
    printf("Gremio:%d\n",k);
    printf("Empates:%d\n",j);
    if(l>k)
        printf("Inter venceu mais\n");
    if(l<k)
        printf("Gremio venceu mais\n");
    if(k==l)
        printf("Nao houve vencedor\n");
    return 0;
}

