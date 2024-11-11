// the number is prime or composite
#include<stdio.h> 
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){ // i is a factor of n
            a = 1;
            break;  // break statement is used to terminate 
        }
    }
    if(n==1){
        printf("the given number is neither prime nor composite");
    }
    else if(a==0){
    printf("the number is prime\n");
    }
    else{
        printf("the given number is composite\n");
    }
    return 0;
}
// prime number 1 aur itself se divisible hota h (agar divisible nhi hoga to a=0 hoga)
//composite me banki number se divisible hota h( agar divisible hoga to a=1 hoga)