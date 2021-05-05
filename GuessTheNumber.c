// Guess the numbergame
// 1)Ask user for a range 2) Let user make guess(If guess is lower than number tell the user its low and vice versa)
// 3)When user makes the right guess, tell him the turns taken to guess the right number
// 4)Ask user at end if he wants to play again.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int high,low,random,count=0,guess;
    int tryagain;
        while(1){
            printf("Enter the range in which you want to play?Eg: Enter 10,1 if you want this range \n");
            scanf("%d,%d",&high,&low);
            
            srand(time(0));                           // Generating random number in range provided by User.
            random =  (rand()%(high-low)+1)+low;

          while(1){
                printf("Enter your guess between %d and %d which you have selected \n", high, low);
                scanf("%d",&guess);
                count++;
                if(guess> random){
                printf("Lower NUmber Please. Please try again \n");
                continue; 
                }
                if(guess < random){
                printf("Higher Number Please. Please try again \n");  
                continue;  
                }
                if(guess == random){
                printf("Hurray! you guessed the right number \n");     
                break;
                }
              }// ends loop

      printf("Congratulations! you guessed the number in %d turns \n", count);
      printf("Do you want to play again? Enter 1 for yes or 0 for no ? \n" ); // Asking user to play again
      scanf("%d",&tryagain);

      if(tryagain == 1 ){
          continue;
      }
      else if(tryagain == 0){
          printf("Thank you for playing \n" );
          break;
     }
      else{
         continue;
      }
       
     } // ends Main loop
        
        return 0;
        
}