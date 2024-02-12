#include<stdio.h> 

int main(){
    int i=34;
    int *j= &i;// j will now store the address of i
    printf("value of i %d  \n",i);
    printf("value of i %d  \n",*j);
    printf("Address of i %u  \n",&i);
    printf("Address of i %u  \n",j);
    printf("Address of j %u  \n",&j);
    printf("value of j %u  \n",*(&j));
    
    return 0;
}