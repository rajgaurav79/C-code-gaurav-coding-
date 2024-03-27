#include <stdio.h>
int main(){
    int a;
    printf("enter the age of Ram  : ");
    scanf("%d",&a);
    int b;
    printf("enter the age of Shyam : ");
    scanf("%d",&b);
    int c;
    printf("enter the age of Ajay :");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("the ram is younger than shyam and ajay");

    }
   if(b<a && b<c){
        printf("the shyam is younger than ram and ajay");

}
 if(c<a && c<b){
        printf("the ajay is younger than ram and shyam");
 }
 return 0;
}