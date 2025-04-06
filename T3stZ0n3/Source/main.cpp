#include <iostream>  
#include "../Header/main.h"  
#include "../Header/utils.h"  
#include "../Header/quiz.h"  

using namespace std;  


int main() {
    int choice;  // Declare a variable to store the user's choice
    do {  // Start a do-while loop to repeatedly show the menu
        showMenu();  // Call the function to display the menu
        cin >> choice;  // Get the user's choice from the input
        handleUserChoice(choice);  // Handle the user's choice based on the input
    } while (choice != 4);  // Exit the loop when the user selects '4' to quit
    return 0;  // Return 0 to indicate the program has finished successfully
}

// Function to display the menu options to the user
void showMenu() {
    clearScreen();  // Clear the screen each time the menu is shown
    cout << "==== School Quiz Game ====" << endl;  // Display the game title
    cout << "1. Play" << endl;  // Option 1: Start the quiz
    cout << "2. How to Play" << endl;  // Option 2: Show instructions for the game
    cout << "3. About Us" << endl;  // Option 3: Show information about the creators
    cout << "4. Exit" << endl;  // Option 4: Exit the program
    cout << "Enter your choice: ";  // Prompt the user for their choice
}

// Function to handle the user's choice based on the input
void handleUserChoice(int choice) {
    switch (choice) {  // Switch statement to handle different choices
    case 1:  // If the user selects option 1 (Play)
        startQuiz();  // Start the quiz
        break;
    case 2:  // If the user selects option 2 (How to Play)
        showHowToPlay();  // Show instructions for playing the game
        break;
    case 3:  // If the user selects option 3 (About Us)
        showAboutUs();  // Show information about the creators
        break;
    case 4:  // If the user selects option 4 (Exit)
        cout << "Exiting...\n";  // Display exit message
        break;
    default:  // If the user enters an invalid choice
        cout << "Invalid choice. Try again.\n";  // Display error message
    }
    pause();  // Pause the program to allow the user to read the message
}

// Function to show how to play the quiz
void showHowToPlay() {
    clearScreen();  // Clear the screen to show only the instructions
    cout << "==== How to Play ====" << endl;  // Display the "How to Play" title
    cout << "Answer multiple choice questions on C++, HTML, and JS." << endl;  // Explain the game rules
    cout << "You will get a grade based on how many you answer correctly." << endl;  // Explain grading system
    cout << "Press Enter to return to the main menu...\n";  // Prompt the user to press Enter to return
    cin.get();  // Wait for the user to press Enter
    cin.get();  // Consume any remaining newline character to avoid skipping input
}

// Function to show information about the creators
void showAboutUs() {
    clearScreen();  // Clear the screen to show only the "About Us" section
    cout << "==== About Us ====" << endl;  // Display the "About Us" title
    cout << "This quiz was created by a 9th-grade C++ student!" << endl;  // Display the creator's information
    cout << "Press Enter to return to the main menu...\n";  // Prompt the user to press Enter to return
    cin.get();  // Wait for the user to press Enter
    cin.get();  // Consume any remaining newline character to avoid skipping input
}

// Function to start the quiz and calculate the grade
void startQuiz() {
    clearScreen();  // Clear the screen to show only the quiz
    int totalCorrect = runQuiz();  // Run the quiz and get the number of correct answers
    int totalQuestions = 20;  // Total number of questions in the quiz
    int grade = calculateGrade(totalCorrect, totalQuestions);  // Calculate the grade based on correct answers

    cout << "\nYou got " << totalCorrect << " out of " << totalQuestions << " correct." << endl;  // Display the score
    cout << "Your grade is: " << grade << endl;  // Display the grade
    cout << "Press Enter to return to the main menu...\n";  // Prompt the user to press Enter to return
    cin.get();  // Wait for the user to press Enter
    cin.get();  // Consume any remaining newline character to avoid skipping input
}
