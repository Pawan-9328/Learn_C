//Write a program to sum the first ten natural numbers using a while loop.

#include<stdio.h> 

int main(){
    int a,sum=0,n=10;
    
    for (a = 0; a<=n; a++)
    {
      sum+= a;
        printf("The value of sum( 1 to 10 )is %d \n",sum);
    }
    
    return 0;
}