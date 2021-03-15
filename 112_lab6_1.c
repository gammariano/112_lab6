#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count;
    char s[25][25],t[25];
    scanf("%d",&count);
    for(i=0;i<=count;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<=count;i++)
    {
        for(j=i+1;j<=count;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {

            }
        }
    }


    return 0;
}
