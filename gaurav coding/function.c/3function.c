#include<stdio.h>
#include<math.h>  // ye likhna bhi jruri h tbhi comp.smjhega sqrt ky hota 
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);

    int root = sqrt(a);
    printf("The square root is : %d",root);
    
    return 0;
}