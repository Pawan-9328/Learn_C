#include<stdio.h> 

int main(){
    //char str[] = {'a','p','p','l','e','\0'};
    char str[]= "apple";
    char *ptr = str;
    while(*ptr!='\0')
    {
      printf("%c",*ptr);
      ptr++;
    }
    
    return 0;
}