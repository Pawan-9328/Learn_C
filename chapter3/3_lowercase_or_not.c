#include<stdio.h> 

int main(){
    char ch; 
    printf("Enter a character \n");
    scanf("%c",&ch);
        //97-122   a-z ASCII value programe
    if ((ch<= 'z' && ch>= 'a') || (ch<= 'A' && ch>=  'Z' ) )
    {
         printf("It is lowercase \n",ch );
        
    }

    //65-90 A-Z
  
   else
   {
    
       printf("It is a Capitalcase \n" ,ch);
   }
   
   
   
    
    return 0;
}