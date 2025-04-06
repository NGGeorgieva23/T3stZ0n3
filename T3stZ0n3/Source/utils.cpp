#include <iostream>  // Include the iostream library for input/output operations
#include "../Header/utils.h"  // Include the header file for utility functions

using namespace std;  // Use the standard namespace to avoid needing to prefix "std::"

// Function to clear the screen (platform-dependent)
void clearScreen() {
    system("cls"); // On Windows, use "cls" to clear the screen
    // Replace with "clear" if you're on Linux/macOS (uncomment the line below)
    // system("clear"); 
}

// Function to pause the program and wait for the user to press Enter
void pause() {
    cout << "\nPress enter to continue...";  // Prompt the user to press Enter
    cin.ignore();  // Ignore any leftover characters in the input buffer
    cin.get();  // Wait for the user to press Enter
}

// Function to calculate the grade based on the number of correct answers and total questions
int calculateGrade(int correctAnswers, int totalQuestions) {
    double percent = (double)correctAnswers / totalQuestions * 100;  // Calculate the percentage of correct answers
    if (percent < 50) return 2;  // Return grade 2 if the percentage is less than 50%
    if (percent < 60) return 3;  // Return grade 3 if the percentage is less than 60%
    if (percent < 70) return 4;  // Return grade 4 if the percentage is less than 70%
    if (percent < 80) return 5;  // Return grade 5 if the percentage is less than 80%
    return 6;  // Return grade 6 if the percentage is 80% or higher
}