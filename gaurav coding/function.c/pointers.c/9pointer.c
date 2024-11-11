#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a; //int* = int ka address store karta h
    int** y = &x; // int** = int* ka address store karta h
    printf("%d\n",*x); // %d h to *x me a ka int.value store hoga
    printf("%d\n",**y);
    return 0;
}