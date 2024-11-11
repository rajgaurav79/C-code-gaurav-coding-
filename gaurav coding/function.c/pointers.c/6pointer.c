#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;
    *x = 7; //vvip
    // a is changed , a ke address me jake uska value ko change kar diye
    printf("%d\n",a); // %d se integer print hota h
    return 0;

}