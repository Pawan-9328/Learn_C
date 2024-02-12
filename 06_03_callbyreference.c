#include<stdio.h> 
 void swap(int *a, int *b);
int main(){
    int x=4,y=7;
    printf("The value of x and y before swap %d %d \n ",x,y);
    swap(&x,&y);
    printf("The value of x and y after swap %d %d \n",x,y);
    return 0;
}
 void swap(int *a ,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    


}