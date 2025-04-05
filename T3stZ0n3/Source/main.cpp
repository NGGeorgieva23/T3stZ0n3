#include <iostream>
#include "../Header/main.h"
#include "../Header/utils.h"
#include "../Header/quiz.h"
using namespace std;

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        handleUserChoice(choice);
    } while (choice != 4);  // Exit when the user selects '4'
    return 0;
}

void showMenu() {
    clearScreen();  // Clears the screen each time the menu is shown
    cout << "==== School Quiz Game ====" << endl;
    cout << "1. Play" << endl;
    cout << "2. How to Play" << endl;
    cout << "3. About Us" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

void handleUserChoice(int choice) {
    switch (choice) {
    case 1:
        startQuiz();
        break;
    case 2:
        showHowToPlay();
        break;
    case 3:
        showAboutUs();
        break;
    case 4:
        cout << "Exiting...\n";
        break;
    default:
        cout << "Invalid choice. Try again.\n";
    }
    pause();
}

void showHowToPlay() {
    clearScreen();  // Clear screen after menu to show only the instructions
    cout << "==== How to Play ====" << endl;
    cout << "Answer multiple choice questions on C++, HTML, and JS." << endl;
    cout << "You will get a grade based on how many you answer correctly." << endl;
    cout << "Press Enter to return to the main menu...\n";
    cin.get();  // Wait for the user to press Enter
    cin.get();  // Consume any remaining newline character
}

void showAboutUs() {
    clearScreen();  // Clear screen after menu to show only the 'About Us' section
    cout << "==== About Us ====" << endl;
    cout << "This quiz was created by a 9th-grade C++ student!" << endl;
    cout << "Press Enter to return to the main menu...\n";
    cin.get();  // Wait for the user to press Enter
    cin.get();  // Consume any remaining newline character
}

void startQuiz() {
    clearScreen();  // Clear the menu and show only the quiz
    int totalCorrect = runQuiz();  // Run the quiz and get the score
    int totalQuestions = 6;
    int grade = calculateGrade(totalCorrect, totalQuestions);

    cout << "\nYou got " << totalCorrect << " out of " << totalQuestions << " correct." << endl;
    cout << "Your grade is: " << grade << endl;
    cout << "Press Enter to return to the main menu...\n";
    cin.get();  // Wait for the user to press Enter
    cin.get();  // Consume any remaining newline character
}