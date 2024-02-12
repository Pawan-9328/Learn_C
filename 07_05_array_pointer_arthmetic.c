#include<stdio.h> 

int main(){
    int i= 35;
    int *ptr = &i;
    printf("The value of is %u \n",ptr);
    ptr++;
    printf("The value of ptr %u \n ",ptr);
    return 0;
}