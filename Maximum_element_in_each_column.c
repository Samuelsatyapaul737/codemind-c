#include<stdio.h>
int main()
{
    int m[20][20],r,c,i,j,max;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        max=m[0][i];
        for(j=0;j<r;j++)
        {
            if(max<m[j][i])
            {
                max=m[j][i];
            }
        }
    printf("%d
",max);
        
    }
}