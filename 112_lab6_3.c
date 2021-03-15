#include<stdio.h>
int main()
{
    int n,q,I,i,j,k,z,a,b,count;
    char A[2];
    scanf("%d %d" ,&n,&q);
    int B[n];
    for(I=0;I<n;I++)
    {
        B[I]=0;
    }
    for(I=0;I<q;I++)
    {
        scanf("%s" ,A);
        if(A[0]=='U')
        {
            scanf("%d %d" ,&i,&z);
            B[i]=z;
        }
        else if(A[0]=='P')
        {
            scanf("%d %d" ,&a,&b);
            count=B[a];
            for(j=a+1;j<=b;j++)
            {
                if(B[j]>count)
                {
                    count=B[j];
                }
            }
            printf("%d\n" ,count);
        }
    }
    return 0;
}
