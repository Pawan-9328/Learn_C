#include<stdio.h> 
float force(float mass);
int main(){
    int m;
    printf("Enter the mass value in kg \n");
    scanf("%d",&m);
    printf("The Mass value is %.1f \n",force(m));
    return 0;
}
float force(float mass){
    float result = mass * 9.8;
    return result;
}