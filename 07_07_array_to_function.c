#include<stdio.h> 
void printArray(int *ptr , int n){ //ptr[]
    for (int  i = 0; i < n; i++)
    {
     printf("The value of element is %d %d: \n",i+1,*(ptr+i)); //ptr[i]
    }
    ptr[2] = 4587;//This value will be changes in arr array of main as well
}
int main(){
    int arr[] = {54,65,789,45,658,789,100};
    printArray(arr,7);
    printf("%d",arr[2]);
    
    return 0;
}