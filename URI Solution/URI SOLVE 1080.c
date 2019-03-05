#include<stdio.h>
int main()
{
    int i,j=0,position,a[100];
    for (i = 0;i < 100;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0;i < 100;i++){
            if(a[i] > j){
                j = a[i];
                position = i+1;
            }
    }
    printf("%d\n",j);
    printf("%d\n",position);

    return 0;
}
