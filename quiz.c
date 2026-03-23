#include <stdio.h>
#include <ctype.h>


int main()
{
    char questions[][200] = {"1. What is the capital of France?",
                            "2. Who wrote 'Romeo and Juliet'?",
                            "3. What is the chemical symbol for gold?",
                            "4. What is the fastest land animal?",
                            "5. What is the hardest natural substance?"};

    char options[][200] = {"A) Berlin\nB) Madrid\nC) Paris\nD) Rome",
                            "A) Charles Dickens\nB) William Shakespeare\nC) Mark Twain\nD) Jane Austen",
                            "A) Ag\nB) Au\nC) Fe\nD) Go",
                            "A) Lion\nB) Tiger\nC) Cheetah\nD) Horse",
                            "A) Iron\nB) Diamond\nC) Gold\nD) Steel"};

    char answerKey[] = {'C', 'B', 'B', 'C', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("QUIZ GAME!\n");

    for (int i = 0; i < questionCount; i++)
    {
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);

        do
        {
            printf("Enter your answer: ");
            scanf(" %c", &guess);

            guess = toupper(guess);

            if (guess != 'A' && guess != 'B' && guess != 'C' && guess != 'D')
            {
                printf("\nInvalid input! Enter A, B, C or D only\n");
            }
            
  
        } while (guess != 'A' && guess != 'B' && guess != 'C' && guess != 'D');

        if(guess == answerKey[i])
        {
            printf("\nCorrect! Well done.\n");
            score++;
        } 
        else
        {
            printf("\nWrong answer.\n");
        }  

    }

    printf("\nQuiz completed!\n");
    if (score > 3)
    {
        printf("Excellent job! %d / %d\n", score, questionCount);
    }
    else if(score <= 3 && score > 1)
    {
        printf("Good effort! %d / %d\n", score, questionCount);
    }
    else
    {
        printf("Better luck next time! %d / %d\n", score, questionCount);
    }
    
    float accuracy = (float)score / questionCount * 100;
    printf("Accuracy: %.2f%%\n", accuracy);

    
}