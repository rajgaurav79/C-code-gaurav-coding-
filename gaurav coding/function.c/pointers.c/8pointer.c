#include<stdio.h> // DOUBLE POINTERS
int main(){
    int a = 25;
    int* x = &a; //int* = int ka address store karta h
    int** y = &x; // int** = int* ka address store karta h
    printf("%p\n",&x); // %p h to &x me a ka address store hoga
    printf("%p\n",y);
    return 0;
}