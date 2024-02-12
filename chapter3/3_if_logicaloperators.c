#include<stdio.h> 

int main(){
    int age;
    //int vipPass=0;
    // vipPass=1;
    printf("Enter you age \n");
    scanf("%d",&age);

    if (age<=70 && age>=18)
    // if (age<=70 && age>=18) ||(or opertor true | false =true koi bhii ek true hona chiye )  !(not operator provide true value ko false krta hor false value ok true ) (vipPass==1)
    {
    printf("You are above 18 and below 70, you can drive \n");
    }
    else
    {
        printf("Yor are not drive \n");
    }
    
    return 0;
}