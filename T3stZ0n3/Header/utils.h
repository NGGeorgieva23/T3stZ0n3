#pragma once  // Ensure that the contents of this file are included only once during compilation

// Function declaration to clear the screen (platform-dependent)
void clearScreen();

// Function declaration to pause the program and wait for the user to press Enter
void pause();

// Function declaration to calculate the grade based on the number of correct answers and total questions
int calculateGrade(int correctAnswers, int totalQuestions);
