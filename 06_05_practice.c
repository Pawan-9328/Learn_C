/*Write a program having a variable i. Print the address of i. 
Pass this variable to a function and print its address.
Are these addresses same? Why?.*/

#include<stdio.h> 
void printadd(int a){
    printf("The address value of a is %u \n",&a);
}

int main(){
    int i= 4;
    printf("The value of i is %d \n",i);
    printadd(i);
    printf("The address value of i is %u \n",&i);
    
    return 0;
}