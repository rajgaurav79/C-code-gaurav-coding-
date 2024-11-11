#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;
    printf("%d\n",*x); // *x mtlb x me ab a ka value store hoga 
    return 0;   // *x ka mtlb integer ka value ko point out kr rha 
}