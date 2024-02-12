//Q calculate a student persentage 

#include<stdio.h> 

int main(){
    int maths ,physics ,chemistry;
    float total;

    printf("Enter your Maths marks \n");
    scanf("%d",&maths);
    printf("Enter your Physics marks \n");
    scanf("%d",&physics);
    printf("Enter your Chemistry marks \n");
    scanf("%d",&chemistry);
    total = (maths + physics + chemistry)/3;
    if ((total<40) || maths<33 || physics<33 || chemistry<33)
    {
       printf("Your total persentage is %f and you are Fail \n",total);// create integer value then =%d and (int)
    }
    else
    {
        printf("Your total persentage is %f and you are Pass \n",total);
    }
    
    
    return 0;
}