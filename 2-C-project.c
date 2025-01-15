//Quiz game
#include<stdio.h>
int main(){
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05;
    int total1,total2,total3;
    printf("\n Welcome to the Game\n");
    printf(">Press 7 to start the game\n");
    printf(">Press 0 to quit the game\n");
    scanf("%d",&i);
    if(i==7){
        printf("The Game has started\n\n");

    }else if(i==0){
        printf("The game has ended\n\n");
    }else{
        printf("Invalid\n\n");
    }
    if(i==7){
        printf("\n1)Which one is the first search engine in the internet?\n\n");
        printf("1)Google\n");
         printf("2)Archie\n");
          printf("3)Wais\n");
           printf("5)Altavista\n");
           printf("Enter Your Answer:");
           scanf("%d",&ans1);
           if(ans1==2){
            printf("correct answer\n");
            point1=5;
            printf("You have scored %d point\n",point1);
           }else{
            printf("Wrong Anser\n");
            point01=0;
            printf("You have scored %d point\n ",point1);
           }
            printf("\n2)Which one is the firstweb browser invented in 1990?\n\n");
        printf("1)Internet Explorer\n");
         printf("2)Mosaic\n");
          printf("3)Mozilla\n");
           printf("5)www\n");
           printf("Enter Your Answer:");
           scanf("%d",&ans2);
           if(ans2=5){
            printf("Correct answer");
            point2=5;
            printf("You have scored %d point\n ",point2);
            
           }
           else{
            printf("wrong answeer\n");
            point02=0;
            printf("You have scored %d point\n ",point02);
           }
             printf("\n3)First computer virus known as?\n\n");
        printf("1)Rabbit\n");
         printf("2)Creeper virus\n");
          printf("3)Elk clonwer\n");
           printf("5)Sca virus\n");
           printf("Enter Your Answer:");
           scanf("%d",&ans3);
           if(ans3=2){
            printf("Correct answer");
            point3=5;
            printf("You have scored %d point\n ",point3);
            
           }
           else{
            printf("wrong answeer\n");
            point03=0;
            printf("You have scored %d point\n ",point03);
           }
             printf("\n4)Firewall in computer is used for?\n\n");
        printf("1)Security\n");
         printf("2)Data transmission\n");
          printf("3)Monitoring\n");
           printf("4)Autentication\n");
           printf("Enter Your Answer:");    
           scanf("%d",&ans4);
           if(ans4=1){
            printf("Correct answer");
            point4=5;
            printf("You have scored %d point\n",point4);
            
           }
           else{
            printf("wrong answeer\n");
            point04=0;
            printf("You have scored %d point\n",point04);
           }
             printf("\n5)Which of the following is not a database management?\n\n");
        printf("1)Mysql\n");
         printf("2)Oracle\n");
          printf("3)cobal\n");
           printf("5)Sybase\n");
           printf("Enter Your Answer:");
           scanf("%d",&ans5);
           if(ans5=3){
            printf("Correct answer");
            point5=5;
            printf("You have scored %d point\n",point5);
            
           }
           else{
            printf("wrong answeer\n");
            point05=0;
            printf("You have scored %d point\n",point05);
           }
           
    }
    return 0;

}