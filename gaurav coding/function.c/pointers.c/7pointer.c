#include<stdio.h> // SWAP USING POINTERS
void swap(int* x, int* y){ // X= a and Y = b
    int temp;
    temp = *x; // temp = 2
    *x = *y; // a = 9
    *y = temp; // *y = 2 -> b=2;
    return;
}
int main(){
    int a = 2;
    int b = 9;
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);

    return 0;
}


    
