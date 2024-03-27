#include <stdio.h>
int main()
{
    int number1,number2 ;
    printf("enter your math number \n");
    scanf("%d",&number1);
      printf("enter your science number \n");
    scanf("%d",&number2);

    printf("you have entered %d as your math and %d science number\n", number1,number2);

    if (number1 >= 33 && number2 >= 33){
        printf("You have pass in both math and science \n Congratulation You got 45 rs gift");
    }
    else if(number1 < 33 && number2 < 33){
        printf("You have fail in both math and science");
    }
    else {

     if(number1 >= 33)
    {
        printf("You have pass only in maths \n Congratulation You got 15 rs gift");
    }
    else
    {
        printf("You have pass only in science \n Congratulation You got 15 rs gift");
    }
  
    }
    printf("\n\n");
     return 0;


}