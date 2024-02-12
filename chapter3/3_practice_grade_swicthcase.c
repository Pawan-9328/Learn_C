#include<stdio.h> 

int main(){
    int score;
   printf("Enter your marks(0-100) \n");
   scanf("%d",&score);
   switch (score/10)
   {
   case 10:
   case 9:
   printf("Your grade is A \n");
   break;

   case 8:
   printf("Your grade is B\n");
   break;

   case 7:
   printf("Your grade is C \n");
   break;
   case 6:
   printf("Your grade is D \n");
   break;

       
       
   
   default:
   printf("Sorry your are fail \n");
       break;
   }

    return 0;
}