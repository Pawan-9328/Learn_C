// What will the following line produce in a C program: printf(“%d %d %d\n”,a,++a,a++);

#include<stdio.h> 

int main(){
    int a=3;

    printf("%d,%d,%d",a,++a,a++);//right to left (behave kr rh h compiler ) 
    return 0;
}