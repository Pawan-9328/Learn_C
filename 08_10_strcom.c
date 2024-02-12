#include<stdio.h> 
#include<string.h> 


int main(){
    char st1[45] = "hello";
    char *st2 = "heflo";
   int val = strcmp(st1 , st2);
   printf("Now the value is st2 is %d \n",val);
    return 0;
}