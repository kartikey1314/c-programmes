#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
   // printf("%d", number);//
    int guess,nguess;
    nguess = 1;
  do
  {
      printf("enter the guess\n");
      scanf("%d", &guess);
      if(guess<number){
          printf("higher the number please\n");
      }else if(guess>number){
          printf("lower the number please\n");
      }else{
          printf("ur score is the no in %d\n", nguess);
      }
      nguess++;
  } while (guess!=number);

   return 0;
}
  
  
