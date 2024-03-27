#include <stdio.h>
int main(){
    int a;
    printf("enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number : ");
    scanf("%d",&b);
    int c;
    printf("enter 3rd number :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("the number is greater than b and c");

    }
   if(b>a && b>c){
        printf("the number is greater than a and c");

}
 if(c>a && c>b){
        printf("the number is greater than a and b");
 }
 return 0;
}