#include<stdio.h> 
#include<string.h> 


int main(){
    char st1[45] = "bhagat";
    char *st2 = "singh";
    
    strcat(st1 ,st2);
    printf("Now the st2 is %s",st1);
    return 0;
}