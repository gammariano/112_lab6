#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count;
    char s[100][100],t[1000];
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
                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);
            }
        }
    }
    for(i=0;i<=count;i++)
    {
        puts(s[i]);
    }
    return 0;
}
