#include<stdio.h> 
#include<stdlib.h>
#include<time.h>


int main(){
    int number;
    srand(time(0));//genrate again and again new number running time
    number= rand()%100+1; //genrate number between 1 to 100
    printf("The number is %d",number);
    
    return 0;
}