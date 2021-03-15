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
    int area=width*height;
    for(i=1;i<area;i++)
    {
        if(sum1%area==0)
        {
            sum2=sum1;
            break;
        }
        else if((num1-i)%area==0)
        {
            sum2=num1-i;
            break;
        }
        else if((num2+i)%area==0)
        {
            sum2=num2+i;
            break;
        }
    }

}
