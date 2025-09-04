#include<stdio.h>
int main(void){
    int i,j;
    printf("enter the value of j");
    scanf("%d",&j);
    for (i=1;i<=20;i++)
    {
        if(i%j!=0)
        {
            printf("%d",i);
        }
    }
}
    

       
