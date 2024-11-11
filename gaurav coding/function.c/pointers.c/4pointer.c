#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a; //*x me a ka addres store ho rha h 
    printf("%p\n",x); // x me a ka address store hoga 
    printf("%p",&x); // &x mtlb x ka khud ka address
    return 0;
}