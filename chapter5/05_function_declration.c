#include<stdio.h> 
void display(); //function prototype ex- ki hum ye function bna rh h.

int main(){
    int a;
      printf("Intializing display  function \n");
       display();               // function call
        printf("Display function finished its work \n");
        return 0;
    }

void display(){  // function definition
printf("This is display \n");
}