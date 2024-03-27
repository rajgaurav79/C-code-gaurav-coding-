#include <stdio.h>
int main(){
    int a;
    printf("enter 1st no. :");
    scanf("%d",&a);
    int b;
    printf("enter 2nd no. :");
    scanf("%d",&b);
    int c;
    printf("enter 3rd no. : ");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("valid triangle");

    }
else{
    printf("invalid triangle");

}
return 0;

}

