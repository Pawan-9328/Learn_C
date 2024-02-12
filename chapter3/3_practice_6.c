/*
#include<stdio.h> 

int main(){
    int a,b,c,d,largest;
    printf("Enter the numbers out of which you have to find the greatest\n ");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);

    largest=(a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
    printf("The largest number is %d",largest);

    return 0;
}*/
/*
#include<stdio.h>

main()

{

int a,b,c,d;

printf("Enter the value of a,b,c,d: ");

scanf("%d %d %d %d",&a,&b,&c,&d);

if(a>b)

{

if(a>c)

{

if(a>d)

{

printf("a is greater");

}

else

{

printf("d is greater");

}

}

else

{

if(c>d)

{

printf("c is greater");

}

else

{

printf("d is greater");

}

}

}

else

{

if(b>c)

{

if(b>d)

{

printf("b is greater");

}

else

{

printf("d is greater");

}

}

else

{

if(c>d)

{

printf("c is greater");

}

else

{

printf("d is greater");

}

}

}

}*/
#include<stdio.h> 

int main(){
    int a,b,c,d;
    printf("Enter a value of a,b,c,d \n");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    if (a>c && a>b && a>d)
    {
      printf("A is greatest value \n");
    }
    else
    {
        printf("D is greatest value \n");
    }
    if (c>d)
    {
        printf("C is greatest value \n");
    }
    else
    {
        printf("D is greatest value \n");
    }
    if (b>c && b>d)
    {
       printf("B is greatest value \n");
    }
    else
    {
        printf("D is greatest value \n");
    }
    if (c>d)
    {
      printf("C is greatest value \n");
    }
    else
    {
        printf("D is greatest value");
    }
    
    
    
    
    
    
    return 0;
}