//  Write a program to Create quiz application. 

#include <stdio.h>
#include <ctype.h>

int main() {
    int score = 0;
    char answer;

    printf("=============================\n");
    printf("    WELCOME TO THE C QUIZ    \n");
    printf("=============================\n");

    // Question 1
    printf("\n1. What does the 'printf' function do?\n");
    printf("A) Takes user input\nB) Prints text to the screen\nC) Performs math\nD) Declares a variable\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B.\n");
    }

    // Question 2
    printf("\n2. Which header file is required to use 'printf' and 'scanf'?\n");
    printf("A) <conio.h>\nB) <math.h>\nC) <stdio.h>\nD) <string.h>\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is C.\n");
    }

    // Question 3
    printf("\n3. What is the value of 5 % 2 in C?\n");
    printf("A) 2.5\nB) 2\nC) 1\nD) 0\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is C.\n");
    }

    // Quiz Summary
    printf("\n=============================\n");
    printf("          QUIZ OVER!         \n");
    printf("=============================\n");
    printf("Your final score is: %d/3\n", score);
    
    if (score == 3) {
        printf("Excellent! You scored perfectly!\n");
    } else if (score == 2) {
        printf("Good job! You passed.\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}
