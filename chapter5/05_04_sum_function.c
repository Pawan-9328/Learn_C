#include<stdio.h> 
int sum (int a ,int b); // function prototype 


int main(){
     
     int c;
     c= sum(2 , 7); // function call   and 2,7 is arguments 
     printf("The value of C is %d \n",c);
    return 0;
}
int sum (int a ,int b){  

    int result;
    result = a + b;
    return result ;
}