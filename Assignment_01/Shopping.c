#include<stdio.h>
int main()
{
    int tk,left=0;
    scanf("%d",&tk);
    if(tk>1000){
        printf("I will buy Punjabi\n");
        left=tk-1000;
        if(left>=500){
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }else{
        printf("Bad luck!");
    }
    
    return 0;
}