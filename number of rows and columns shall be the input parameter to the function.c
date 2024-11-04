#include <stdio.h>

int main() {
    int i,j,n;
    printf("enter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=n;j++)
            {
                printf("%d",j);
            }
        }
        else
        {
            for(j=n;j>0;j--)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }

    return 0;
}
