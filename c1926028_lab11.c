//Question1
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{   
    int num1,num2;
    num1=rand()%100+1;
    num2=rand()%100+1;
    printf("Generated Random Numbers are:");
    scanf("%d,",&num1);
    scanf("%d",&num2);
    int i;
    printf("Numbers Between:");
    for(i=num1;i<=num2;i++){
        printf(" %d",i);
    }
    
    int rand1;
    rand1=rand()%10+1;
    printf("\nNumbers that are divisible by %d in range:",rand1);
    for(i=num1;i<num2;i++){
        if(i%rand1==0){
            printf(" %d",i);
        }
    }
    
    return 0;
}
/*//Question2
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	int opponentSum=0;
	int userSum=0;
    int count=0;
    
    while(true){
    	printf("Your dice is:");
    	int user=1+(rand()%6);
    	printf("%d\n",user);
    	
    	printf("Opponent's dice is:");
    	int opponent=1+(rand()%6);
    	printf("%d\n",opponent);
    	
    	printf("Do you want to continue(y/n)?");
    	char ch;
    	scanf("%c",&ch);
    	getchar();
    	
        if(ch=='n'){
        	break;
		}
		count++;
		userSum+=user;
		opponentSum+=opponent;
    	
	}
printf("\nyour total = %d, your average=%d",userSum,userSum/count);
printf("\nopponent's total=%d, opponent's average=%d",opponentSum,opponentSum/count);

if(userSum<opponentSum){
    printf("\nyou lost the game");
}
    else if(userSum>opponentSum){
        printf("\nyou won the dice game");
    }
}
//Question3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
   int n; 
   printf("Enter the number of time that cars will move:  ");
   scanf("%d",&n); //read number of time that cars will move
   
   int Car1=0,Car2=0,Car3=0,r1,r2,r3,Cround = 0;
   while(n!=Cround){
       printf("\n\n---------------------Round %d----------------------",Cround+1);
       printf("\ndistance for this raund : \n");
                                     //generating  random number s
        r1 = (rand() % (30 - 1 + 1)) + 1; 
        r2 = (rand() % (30 - 1 + 1)) + 1; 
        r3 = (rand() % (30 - 1 + 1)) + 1;
       
       printf("car 1=  %d, car 2 =  %d,  car 3 =  %d\n",r1,r2,r3); //display randomly generated distance
       Car1 += r1;
       Car2 += r2;
       Car3 += r3;
       
        printf("distance status :  \n");
        printf("car 1=  %d, car 2 =  %d, car 3 =  %d",Car1,Car2,Car3); //display distance status
        Cround++;
   }
 
   printf("\n\nRace Result: \n");
                               //finding the winner
   if((Car1 > Car2) && (Car1 > Car3)) 
   {
      printf("car 1 is the winner.");
   }
   else if((Car2 > Car1) && (Car2 > Car3))
   {
      printf("car 2 is the winner.");
   }
   else if((Car3 > Car1) && (Car3 > Car2)) 
   {
     printf("car 3 is the winner.");
   }
    printf("\n------------------------");
   return 0;
}

//Question4
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int num, guess, tries = 0;
    srand(time(0)); 
    num = rand() % 100 + 1; 

    printf("Guess My Number Game\n\n");

    do
    {
        printf("Enter a guess between 1 and 100 : ");
        scanf("%d", &guess);
        tries++;

        if (guess > num)
        {
            printf("Too high!\n\n");
        }
        else if (guess < num)
        {
            printf("Too low!\n\n");
        }
        else
        {
            printf("\nCorrect! You got it in %d guesses!\n", tries);
        }
		
    }while (guess != num);

    return 0;
}
*/

