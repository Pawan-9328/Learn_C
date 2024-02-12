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

}
