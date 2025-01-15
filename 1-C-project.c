/*Casino Game(A game where player first enter the amount to deposit in a game and then he enter the amount for bet and then he
 choose a number if he choose a right number then he will get that bet amount added to his deposit and then the game will end 
 but if he choose the wrong number then the bet amont will be deducted from the deposit and then he also have choice to exit the game or to cotinue the game )*/
#include<stdio.h>
int rules();
int round1();
int main(){
    rules();
    printf("\n\n");
    round1();
    return 0;
}
int round1(){
    char name[50];
    printf("Enetr your name:");
    scanf("%s",&name);
    printf("\n\n");
    int deposit;
    printf("Enter the amount of money to deposit for the game:");
    scanf("%d",&deposit);
    printf("\n\n");
    printf("Your current balance is $%d",deposit);
    printf("\n\n");
    int bet1;
    printf("%s, Enter the amount to bet:$",name);
    scanf("%d",&bet1);
    printf("\n");
    if(bet1>deposit){
        printf("Money exceeds,\n");
        printf("Enter Again:$");
        scanf("%d",&bet1);
    }
    printf("\n");
    int computer1;
    computer1=rand()%10;
    int guess1;
    printf("Guess a number from 1-10:");
    scanf("%d",&guess1);
    printf("\n\n");
    if(guess1>10){
        printf("Number exceeds\n");
        printf("Enter Again:");
        scanf("%d",&guess1);
    }
        printf("\n\n");
        if(guess1==computer1){
            printf("You have won$%d",bet1);
            printf("\n\n");
            int bet2;
            bet2=bet1*10;
            int new_won;
            if(bet1==deposit){
                    new_won=bet2+0;

            }else{
                new_won=bet2+deposit;
            }
            printf("You have won %d as total",new_won);
        }else if(guess1!=computer1){
            printf("You have lost %d",bet1);
            printf("\n\n");
            printf("The correct number is %d",computer1);
            printf("\n\n");
            int new_los;
            new_los=deposit-bet1;
            printf("Now you have %d as a balance",new_los);
            printf("\n\n");
            if(new_los==0){
                printf("Sir/Mam You have $0 as a balanve\n");
                printf("You have no money to play\n");
                printf("Have a nice day!");
            }else{
                int decision;
                     printf("Do you want to continue(Y/N)?");
                printf("Press 1 for Yes\n");
                printf("Press 2 for no\n");
           
               scanf("%d",&decision);
            
                printf("\n\n");
                if(decision==1){
                    rules();
                    printf("\n\n");
                    printf("Now you have $%d as a balance",new_los);
                    printf("\n\n");
                    int bet3;
                    printf("%s,Enter the momney to bet:$",name);
                    scanf("%d",&bet3);

                    printf("\n\n");
                    if(bet3>new_los){
                        printf("Money Exceed\n");
                        printf("Enter Again:$");
                        scanf("%d",&bet3);
                        
                    }
                    int guess2;
                    printf("Enter a number from 1-10: ");
                    scanf("%d",&guess2);
                    printf("\n\n");
                    int computer2;
                    computer2=9;
                    if(guess2>10){
                        printf("Number Exceeds,\n");
                        printf("Enter Again:$");
                        scanf("%d",&guess2);
                        printf("\n\n");
                    }if(guess2==computer2){
                        printf("You have won %d",bet3);
                        printf("\n\n");
                        int b;
                        b=bet3*10;
                        int b1;
                        if(bet3==new_los){
                            b1=b+0;
                        }else{
                            b1=b+new_los;
                        }
                        printf("Ypu have won %d as total",b1);
                    }else if(guess2!=computer2){
                        printf("You have loss $%d",bet3);
                        printf("\n\n");
                        int b2;
                        b2=new_los-bet3;
                        printf("You have $%d as a total",b2);
                        printf("\n\n");
                        if(b2==0){
                            printf("Sir/Mam You have $0 as a balance\n");
                            printf("You have no money to play\n");
                            printf("Have a nice day !");
                        }
                    }
                }
                else if(decision==2){
                    printf("Have a Nice Day Sir/Man");
                }
            }

        }

}
int rules(){
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("RULES\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("1.Choose any number betwee 1 to 10\n");
    printf("2.If you win you will get 10times of money you bet\n");
    printf("3.If you bet on wrong number you will loose your betting amount\n");
    printf("----------------------------------------------------------------------------------------------------------\n");

}