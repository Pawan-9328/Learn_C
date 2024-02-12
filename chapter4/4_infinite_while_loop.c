//infinite loop programe(A loop that repeats indefinitely and never terminates is called an Infinite loop. )

#include<stdio.h> 

int main(){
    int a;
    scanf("%d",&a);
    a=11;
    while (a>10)//-- while-- checks the condition and then executes the code.
    {
      printf("%d  \n",a);
      a++;

    }
    
    return 0;
}