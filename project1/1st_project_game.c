#include<stdio.h> 
#include<stdlib.h>
#include<time.h>


int main(){
    int number,guess,ngguess=1;
    srand(time(0));
    number= rand()%100+1;//genrates number between 1 to 100
  // printf("The number is %d \n",number); //guess answer number print line
    do
    {
        printf("Guess the number please \n");
        //keep running the loop until the number is guessed
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number please \n");
        }else if (guess<number)
        {
        printf("Higher number please \n");
        }
        else
        {
            printf("You guess in it %d attempts \n",ngguess);
        }
        ngguess++;
        
    } while(guess!=number);
    
    
    return 0;
}