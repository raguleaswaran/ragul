#include<stdio.h>
int main()
{
    int n,i,j,k,count=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {count=0;
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                if(i==(j*j)+(k*k))
                count++;
            }
        }
        if(count>2)
        printf("%d ",i);
    }
    return 0;
}