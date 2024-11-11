#include<stdio.h>  // SWAP 2 NUMBERs without using temp. variable
int main(){ 
    int a; 
    printf("Enter a : ");
    scanf("%d",&a);
    int b ;
    printf("Enter b : ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;   
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    
    return 0;
}