#include<stdio.h>
int main(){
    int l;
    printf("enter length : ");
    scanf("%d",&l);
    int b;
    printf("enter breadht : ");
    scanf("%d",&b);
    int a = l*b;
    int p = 2 * (l+b);
    if(a>p){
printf("Area  is greater than  perimeter");

    }
else{
    printf("Area is less than perimeter");

}
return 0;

}