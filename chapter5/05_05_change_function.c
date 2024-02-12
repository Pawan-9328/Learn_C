#include<stdio.h> 
void change (int a);
int main(){
    int b = 344;
    printf("The value of b is before change %d \n",b);
    change(b);
    printf("The value of b is after change %d \n",b);

    return 0;
}

void change (int a){
    a=77;

}