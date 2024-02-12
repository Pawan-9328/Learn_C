#include<stdio.h> 
int factorial(int x);
int main(){
    int a=7;
    printf(" the value of %d is %d \n",a,factorial(a));
    
    return 0;
}

int factorial(int x){
    printf("calling factorial %d \n",x);// show factorial work index
    if  (x==1|| x==0){ 
    
   return 1;
    }
            //if(0) use - that time the programe run continuously.
else
{
    return x *factorial (x-1);
}
}