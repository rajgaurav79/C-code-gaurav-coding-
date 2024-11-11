#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if (i%2==0){
         continue;
        }
        printf("%d\n",i);
    }
        return 0;
    }

// continue statement mtlb i%2(even no.)ko skip kro  aur odd no. ko print kra do 