// Taking element input from user through scanf//
#include<stdio.h>
 int main(){
    // 1 2 3
    // 3 4 5
    // 6 7 8
    int arr[3][3]; // 9 total elements
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){ // this loop is for taking input 
           scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){ // this loop is for printing input
            printf("%d ",arr[i][j]);
        } 
        printf("\n"); 
    }
    return 0;
    }
