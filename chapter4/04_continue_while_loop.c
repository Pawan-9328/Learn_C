#include<stdio.h> 

int main(){
    int skip =5,i=0;
   // printf("Enter a number of I \n ");
   // scanf("%d",&i);
    while (i<10)
    {
        i++;
        if (i!=skip)
        {
            continue;
        }
        else
        {
            printf("%d \n",i);
        }
        
    }
    
    return 0;
}