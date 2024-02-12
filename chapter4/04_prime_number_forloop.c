//Write a program to check whether a given number is prime or not using loops.

#include<stdio.h> 

int main(){
    int i=2, n,prime=1;
    printf("Enter a number \n");
    scanf("%d",&n);
    while (i<n) //for (int i=2; i<n; i++)
    {
        
         i++;
    
    
        if (n%i==0)
        {
            prime = 0;
            break;
        }}
        if (prime ==0)
        {
            printf("This is not a prime number ");
        }
       else
       {
           printf("This is a prime number");
       }
       
    
    
    return 0;
}