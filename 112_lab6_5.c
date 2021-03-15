#include<stdio.h>
int main()
{
    int i,j,width,height,sum1=0,sum2=0;
    scanf("%d %d",&width,&height);
	int house[width][height];
	for(i=0;i<height;i++)
    {
        scanf("%d",&house[i][j]);
	   	sum1+=house[i][j];
    }
}
