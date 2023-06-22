#include <stdio.h>

char getGrade(int score) {
    int grade;
    
    switch (score) {
        case 90 ... 100:
            grade = 65;
            break;
        case 75 ... 89:
            grade = 66;
            break;
        case 60 ... 74:
            grade = 67;
            break;
        case 50 ... 59:
            grade = 68;
            break;
        case 36 ... 49:
            grade = 69;
            break;
        case 0 ... 35:
            grade = 70;
            break;
        default:
            grade = 71;
    }
    
    return grade;
}

int main() {
    int score;
    char grade;
    
    printf("Enter the Score to get the grade :");
    scanf("%d",&score);

    if(score>=0 && score<=100){
        grade = (char)getGrade(score);
        printf("Grade %c\n", grade);
    }
    else{
        printf("The Score is Invalid ")
    }
    
    return 0;
}