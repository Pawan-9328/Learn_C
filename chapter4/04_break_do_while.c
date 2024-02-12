#include<stdio.h> 

int main(){
    int i=0;
    printf("The value of i is \n");
    scanf("%d",&i);
    do
    {
        printf("The i is %d \n",i);
        i++;
        if (i==5)
        {
            break;
        }
        
    } while (i<10);
    
    return 0;
}