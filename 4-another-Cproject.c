//another big quiz game
#include<stdio.h>
#include<stdlib.h>
char name[30];
int userScore=0,countQ=0;
void calculateScore(){
    if(userScore>=80&&userScore<=100){
        printf("\nCONGRATULATIONS! you passed the quiz with A grade\n",name);
        printf("you got %d number\n",userScore);
        printf("\nYour %d questions are correct",countQ);
    }
    else if(userScore>=60&&userScore<80){
        printf("\nCONGRATULATIONS! you passed the quiz with B grade\n",name);
        printf("you got %d number\n",userScore);
        printf("\n Your %d questions are correct",countQ);
    }
    else if(userScore>=40&&userScore<60){
       printf("\n\tCONGRATULATIONS! you passed the quiz with C grade\n",name);
       printf("you got %d number",userScore);
       printf("\n your %d questions are correct",countQ);
    }
else if(userScore>=10&&userScore<40){
    printf("\n\tSorry You failed the quiz",name);
    printf("\n you got %d number in quiz",userScore);
    printf("\nyour %d questions are correct",countQ);
    printf("\n\t\t**********Better Luck Next Time**********");

}
exit(0);
}


char result(char choose,char correct)
{
    char next;
    if(choose==correct){

        countQ++;
        userScore=userScore+10;
printf("\n answer is correct");
printf("\n press(Y) to continue Quiz");
printf("\nIf you want to end the game then press (N)");
fflush(stdin);
scanf("%c",&next);
    }else
    {
        printf("\n Your Answer is wrong");
        printf("\nPress(Y)to contniue the game and(N)to quit the Game");
        fflush(stdin);
        scanf("%c",&next);
        return(next);
    }
}
void question(){
    char choose,correct;
    printf("\n 1.IN which data type we store character?");
    printf("\n\t(A).int\t\t(B).char\n");
    printf("\n\t(C).char\t(D).byte\n");
    printf("\n Choose Which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';
    correct=result(choose,correct);
    if(correct=='n'||correct=='N'){
        return;
    }
     printf("\n 2,How many bytes does consume int data type in 64 bit OS?\n");
    printf("\n\t(A).4\t(B).6\n");
    printf("\n\t(C)2\t(D).8\n");
    printf("\n Choose Which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='a';
    correct=result(choose,correct);
    if(correct=='n'||correct=='N')
    {
        return;
    }
    printf("\n 3.How many bytes consume float datatype in 64 bit OS?\n");
    printf("\n\t(A).4\t(B).6\n");
    printf("\n\t(C)2\t(D).8\n");
    printf("\n Choose Which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if(correct=='n'||correct=='N'){
        return;
    }
    printf("\n4. How many bytes consume double datatype in 64 bit OS?\n");
    printf("\n\t(A).4\t(B).6\n");
    printf("\n\t(C).2\t(D).8\n");
    printf("\n Choose Which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='d';
    correct=result(choose,correct);
    if(correct=='n'||correct=='N'){
        return;
    }
    printf("\n 5.How many bytes consume char datatype in 64 bit OS?\n");
    printf("\n\t(A).4\t(B).6\n");
    printf("\n\t(C).1\t(D).8\n");
    printf("\n Choose Which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';
    correct=result(choose,correct);
    if(correct=='n'||correct=='N'){
        return;
    }
    printf("\n 6.which type of values are stored in Int datatype\n");
    printf("\n\t(A).integer\t(B).floating point\n");
    printf("\n\t(C).character\t(D).string\n");
    printf("\n Choose Which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='a';
    correct=result(choose,correct);
    if(correct=='n'||correct=='N'){
        return;
    }
     printf("\n 7.which type of values are stored in float datatype\n");
    printf("\n\t(A).integer\t(B).floating point\n");
    printf("\n\t(C).character\t(D).string\n");
    printf("\n Choose Which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if(correct=='n'||correct=='N'){
        return;
    }
    printf("\n 8.which type of values are stored in double datatype\n");
    printf("\n\t(A).integer\t(B).floating point\n");
    printf("\n\t(C).character\t(D).string\n");
    printf("\n Choose Which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if(correct=='n'||correct=='N'){
        return;
    }
    printf("\n 9.what is string\n");
    printf("\n\t(A).integer values\t(B).floating values\n");
    printf("\n\t(C).character array \t(D).array\n");
    printf("\n Choose Which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';
    correct=result(choose,correct);
    if(correct=='n'||correct=='N'){
        return;
    }
    printf("\n 10.what is structure?\n");
    printf("\n\t(A).integer\t(B).float\n");
    printf("\n\t(C).character\t(D).User-defined datatype\n");
    printf("\n Choose Which option is correct:");
    fflush(stdin);
    scanf("%c",&correct);
    correct='d';
    correct=result(choose,correct);
    if(correct=='n'||correct=='N'){
        return;
    }
    calculateScore();
}
void menu(){
    char ch;
    printf("Hello player %s",name);
    printf("\n Here are some rukes for the Quiz game");
    printf("\n1.You can choose only one option at a time");
    printf("\n2.You can choose onlu one option at a time");
    printf("\n3.You need to answer 10 questions");
    printf("\n4.Total number is 100");
    printf("\n5.Press Y to start the game and N to end the game");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y'){
        question();
        calculateScore();
    }else{
        exit(0);
    }
}
void main(){
    printf("\n\t Welcome to Quiz Game\n");
    printf("Enter Your Name");
    gets(name);
    menu();
}