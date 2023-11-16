#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // for (int i = 0; i < c; i++)
    // {
    //     printf("%d ",arr[r-1][i]);
    // }
    // printf("\n");
    // for (int i = 0; i < r; i++)
    // {
    // printf("%d ",arr[i][c-1]);
        
    // }
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
            if (i==r-1)
            {
                printf("%d ",arr[r-1][j]);
            }
             
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
            if (j==c-1)
            {
                printf("%d ",arr[i][c-1]);
            }
        }
    }
    
    
    return 0;
}