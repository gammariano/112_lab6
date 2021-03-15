#include<stdio.h>
int main()
{
    int i,j,width,height,num1,num2,sum1=0,sum2=0;
    scanf("%d %d",&width,&height);
	int house[width][height];
	for(i=0;i<height;i++)
    {
        for(j=0;j<width;j++)
        {
            scanf("%d",&house[i][j]);
            sum1+=house[i][j];
        }
        num1=sum1;
        num2=sum1;
    }

}
