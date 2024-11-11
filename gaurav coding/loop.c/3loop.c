#include<stdio.h> // print even number between 1 to 100
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
            printf("even %d\n",i);
        }
    }
    return 0;
}