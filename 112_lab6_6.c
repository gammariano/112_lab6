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
    for(m=0;m<strlen(pen);m++)
    {
        if(pen[i]=='U')
        {
            if(n>0)
            {
                if(draw[m][n]=='.')
                {
                    draw[m][n]='|';
                }
                else if(draw[m][n]=='-')
                {
                    draw[m][n]='+';
                }
                m--;
                if(draw[m][n]=='.')
                {
                    draw[m][n]='|';
                }
                else if(draw[m][n]=='-')
                {
                    draw[m][n]='+';
                }
            }
        }
        else if(pen[i]=='D')
        {
            if(m<paper-1)
            {
                if(draw[m][n]=='.')
                {
                    draw[m][n]='|';
                }
                else if(draw[m][n]=='-')
                {
                    draw[m][n]='+';
                }
                m++;
                if(draw[m][n]=='.')
                {
                    draw[m][n]='|';
                }
                else if(draw[m][n]=='-')
                {
                    draw[m][n]='+';
                }
            }
        }
        else if(pen[i]=='L')
        {
            if(n>0)
            {
                if(draw[m][n]=='.')
                {
                    draw[m][n]='-';
                }
                else if(draw[m][n]=='|')
                {
                    draw[m][n]='+';
                }
                m--;
                if(draw[m][n]=='.')
                {
                    draw[m][n]='-';
                }
                else if(draw[m][n]=='|')
                {
                    draw[m][n]='+';
                }
            }
        }
    }

    return 0;
}
