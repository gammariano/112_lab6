#include <stdio.h>
#include <string.h>
int main()
{
    int paper,i,j,k,m=0,n=0;
    char pen[250];
    scanf("%d" ,&paper);
    char draw[paper][paper];
    scanf("%s" ,pen);
    for(i=0;i<paper;i++)
    {
        for(j=0;j<paper;j++)
        {
            draw[i][j]='.';
        }
    }

    return 0;
}
