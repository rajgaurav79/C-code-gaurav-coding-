#include <stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    printf("you have enterd %d as your age\n", age);

    if(age>=18)
    {
    printf("you can vote!");
    }
    else if(age>=3)
    {
        printf("you age between 10 to 18 and you can vote for babies");

    }
    else{
        printf("you cant not vote");
        }
    printf("\n\n");
    
 return 0;
  
}

