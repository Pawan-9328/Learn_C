//Q1 write a programe to print  multiplication of a given number n 

#include<stdio.h> 

int main(){
   
    printf("***Multiplication table of 10** \n");
    
    for (int i =1; i<=10; i++)
    {
        printf("10 x %d = %d \n",i,i*10);
    }
    
    return 0;
}