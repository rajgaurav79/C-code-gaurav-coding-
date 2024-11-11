#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if (i%2!=0){
         continue;
        }
        printf("%d\n",i);
    }
        return 0;
    }
 //odd ko skip krke banki ka number print ho jyga..