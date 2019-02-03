#include <stdio.h>
int main()
{
    int arr[10000],i,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0;i< n;i++){
            if (arr[i]==0)
            {
                printf("NULL\n");
            }
            else if (arr[i] > 0 )
            {
             if(arr[i]%2==0)
             {
                 printf("EVEN POSITIVE\n");
             }
             else
             {
                 printf("ODD POSITIVE\n");
             }
            }
        else if (arr[i] < 0)
        {
            if (arr[i]%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}
