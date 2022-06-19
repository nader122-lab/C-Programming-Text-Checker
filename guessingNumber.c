#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 40
#define NUM 10

int main() {
int guess;
int randNum;
printf("Guess a number between 20 and 40?\n");
scanf("%d",&guess);
srand(time(0));
 do{
     randNum=rand()%MAX;
   } while(randNum<20);

 if(randNum == guess)
  {
    printf("well done!\n");
  }

 else if(guess<randNum)
  {
    printf("Wrong guess; better luck next time!\n");
    printf("the correct number is smaller\n");
  }
 else
  {
    printf("Wrong guess; better luck next time!\n");
    printf("the correct number is bigger\n");
  }
return 0;
}

