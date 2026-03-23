# Quiz Game CLI

A simple command line quiz game written in C.

The player answers multiple-choice questions and receives feedback after each answer. At the end, the program displays the final score and accuracy percentage.

## Features

- Multiple-choice quiz (A, B, C, D)
- Input validation (only valid answers allowed)
- Score tracking system
- Final performance feedback
- Accuracy percentage calculation

## Game Flow

1. The game displays a question with 4 possible answers
2. The player enters an answer (A, B, C or D)
3. Invalid inputs are rejected
4. The program checks the answer:
   - Correct → score increases
   - Incorrect → feedback is shown
5. After all questions:
   - Final score is displayed
   - Accuracy percentage is calculated

## Technologies

- C programming language
- Standard C libraries
- `ctype.h` for input normalization

## What I Learned

- Working with arrays (questions, answers, options)
- Using loops for repeated logic
- Input validation with conditions
- Using `toupper()` for case-insensitive input
- Calculating percentages
- Structuring simple CLI applications

## Example

QUIZ GAME!

1. What is the capital of France?

A) Berlin  
B) Madrid  
C) Paris  
D) Rome  

Enter your answer: c  

Correct! Well done.

## Results

- Excellent job → score > 3  
- Good effort → score 2–3  
- Better luck next time → score ≤ 1  

Accuracy is displayed as a percentage.

## Author

Software engineering student at ITS
