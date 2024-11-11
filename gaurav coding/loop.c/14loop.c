//GP questions 100 97 94 91...   (2nd method)
#include<stdio.h>
int main(){
      int n;
    printf("Enter a number :");
    scanf("%d",&n);
    //we take extra variables
    int a = 100;
    for(int i=1;a>0;i++){
        printf("%d ",a);
        a = a - 3;
    }

    return 0;
}

