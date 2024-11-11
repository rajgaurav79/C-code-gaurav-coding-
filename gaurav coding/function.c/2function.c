#include<stdio.h>// jo bhi function call hoga wo function call ke upar hona chhiye
void england(){   // for ex.. india ne australia ko call kiya australia ne england ko call kiya
    printf("You are in England\n");
    return;
}
void australia(){
    printf("You are in Australia\n");
    england(); // calling england
    return;
}
void india(){
    printf("You are in India\n");
    australia(); // calling australia
    return;
}
int main(){
    india(); // calling india
    return 0;
}