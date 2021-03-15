#include<stdio.h>
#include<string.h>
int main()
{
    int num,i,count1=0,count2=0;
    scanf("%d" ,&num);
    char start_num[num],guess_num[num];
    scanf(" %[^\n]s",start_num);
    scanf(" %[^\n]s",guess_num);
    for(i=0;i<num;i++)
    {
        if(start_num[i]==guess_num[i])
        {
            count1++;
        }
    }
}
