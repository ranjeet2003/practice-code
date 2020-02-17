#include<stdio.h>
int main(void)
{
    int t,n,s,j,k;
    scanf("%d",&t);
    while(t--)
    {
        k=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d%d",&s,&j);
            if(j>s)
            {
            if((j-s)>5)
            k++;
            }
            else
            {
                if(s>j)
                {
                    if((s-j)>5)
                    k++;
                }
            }
            
        }
        printf("%d\n",k);
    }
    return 0;
}
