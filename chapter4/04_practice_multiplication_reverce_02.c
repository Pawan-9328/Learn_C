////Q2 write a programe to print multiplication of 10 in reversed order

#include<stdio.h> 

int main(){
    printf("***Multiplication*** of 10 is \n");
    for (int i =10 ; i; i--)
    {
        printf(" 10 x %d = %d \n ",i,10*i);
    }
    

    return 0;
}